#include <stdio.h>
#include <sys/socket.h>
#include <string.h>
#include <netdb.h>
#include <unistd.h>
#include <libnet.h>

#define eprintf(...) fprintf(stderr, __VA_ARGS__)

char *get_ip_str(const struct sockaddr *sa, char *s, size_t maxlen);

int main(int argc, char *argv[]) {
    struct addrinfo hints, *curr, *root;
    int error;
    char buffer[INET6_ADDRSTRLEN] = {0};

    memset(&hints, 0, sizeof(hints));
    hints.ai_flags = AI_ADDRCONFIG;

    for (int i = 1; i < argc; ++i) {
        error = getaddrinfo(argv[i], NULL, &hints, &root);
        if (error != 0) {
            eprintf("Skipping %s: %s\n", argv[i], gai_strerror(error));
            continue;
        }

        int sock = -1;
        for (curr = root; curr != NULL; curr = curr->ai_next) {
            eprintf("Trying %s\n", get_ip_str(curr->ai_addr, buffer, INET6_ADDRSTRLEN));
            sock = socket(curr->ai_family, SOCK_STREAM | SOCK_CLOEXEC, curr->ai_protocol);
            if (sock < 0) {
                perror("failed to open socket");
                continue;
            }
            eprintf("Socket opened\n");
            error = connect(sock, curr->ai_addr, curr->ai_addrlen);
            if (error != 0) {
                perror("failed to connect");
                error = close(sock);
                sock = -2; // attempted to close, so invalidate handle copy
                if (error != 0) {
                    perror("failed to close socket");
                    break;
                }
            } else {
                printf("connected to %s\n", get_ip_str(curr->ai_addr, buffer, INET6_ADDRSTRLEN));
                break;
            }
        }

        freeaddrinfo(root);
        if (sock > 0) {
            error = close(sock);
            if (error != 0) {
                perror("failed to close socket");
                break;
            }
        } else if (sock == -2) {
            break; // attempted to close in loop
        }
    }

    return 0;
}

// Taken from https://gist.github.com/jkomyno/45bee6e79451453c7bbdc22d033a282e
char *get_ip_str(const struct sockaddr *sa, char *s, size_t maxlen) {
    switch(sa->sa_family) {
        case AF_INET:
            inet_ntop(AF_INET, &(((struct sockaddr_in *)sa)->sin_addr),
                      s, maxlen);
            break;

        case AF_INET6:
            inet_ntop(AF_INET6, &(((struct sockaddr_in6 *)sa)->sin6_addr),
                      s, maxlen);
            break;

        default:
            strncpy(s, "Unknown AF", maxlen);
            return NULL;
    }

    return s;
}
