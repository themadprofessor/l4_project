all: l4proj.tex

l4proj.bib:
	pdflatex l4proj.tex
	bibtex l4proj
	pdflatex l4proj.tex

l4proj.tex: l4proj.bib
	pdflatex l4proj.tex
