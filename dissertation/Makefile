l4proj.pdf: l4proj.tex l4proj.bib
	pdflatex l4proj.tex

l4proj.bib:
	pdflatex l4proj.tex
	bibtex l4proj
	pdflatex l4proj.tex

clean:
	rm -f l4proj.pdf *.aux *.log *.out *.toc *.bbl *.blg
