all: flow.pdf send.pdf recv.pdf lifecycle.pdf

%.pdf: %.dot
	dot -Tpdf -o$@ $<

flow.pdf: flow.dot

send.pdf: send.dot

recv.pdf: recv.dot

lifecycle.pdf: lifecycle.dot

lidecycle.png: lidecycle.dia
	>&2 echo "Re-export lifecycle png from DIA"
	false

.PHONY: all