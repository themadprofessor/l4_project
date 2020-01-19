diagrams/flow.pdf: diagrams/flow.dot
    dot -Tpdf -odiagrams/flow.pdf diagrams/flow.dot

l4proj.pdf: l4proj.tex l4proj.bib diagrams/flow.pdf
	latexmk -pdf l4proj.tex

clean:
	rm -f l4proj.pdf *.aux *.log *.out *.toc *.bbl *.blg
