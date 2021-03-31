all: l4proj.pdf
	+$(MAKE) -C diagrams

l4proj.pdf: l4proj.tex background.tex analysis_requirements.tex evaluation.tex design.tex implementation.tex l4proj.bib
	latexmk -pdf

clean:
	rm -f l4proj.pdf *.aux *.log *.out *.toc *.bbl *.blg

proof:
	@echo "weasel words: "
	bash bin/weasel.sh *.tex
	@echo
	@echo "passive voice: "
	bash bin/passive.sh *.tex
	@echo
	@echo "duplicates: "
	perl bin/dups.pl *.tex