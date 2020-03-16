use taps::http::HttpClient;
use taps::properties::TransportProperties;
use taps::Preconnection;

#[tokio::main]
async fn main() {
    for addr in ::std::env::args().skip(1) {
        let preconn = Preconnection::new(
            TransportProperties::default(),
            HttpClient::<(), ()>::default(),
        ).remote_endpoint((addr, 80));

        match preconn
            .initiate()
            .await
        {
            Ok(c) => println!("connected to {}", c.remote_endpoint()),
            Err(e) => eprintln!("failed to connect: {}", e),
        }
    }
}
