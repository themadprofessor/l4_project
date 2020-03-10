all: flow.pdf send.pdf

%.pdf: %.dot
	dot -Tpdf -o$@ $<

flow.pdf: flow.dot

send.pdf: send.dot

recv.pdf: recv.dot

.PHONY: all