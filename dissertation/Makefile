all: l4proj.pdf
	+$(MAKE) -C diagrams

l4proj.pdf: l4proj.tex l4proj.bib
	latexmk -pdf

clean:
	rm -f l4proj.pdf *.aux *.log *.out *.toc *.bbl *.blg
