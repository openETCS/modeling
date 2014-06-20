PDFLATEX=pdflatex  -file-line-error -interaction errorstopmode
IMAGES= \
  images/abstract-hardware-architecture.pdf \
  images/software-architecture.pdf

LATEXFILES= \
  api-description.tex \
  concrete-interface.tex \
  hardware-arch.tex \
  info-flows.tex \
  intro-chapter.tex \
  software-arch.tex \
  time-constraints.tex


default: api-description.pdf

api-description.pdf: $(LATEXFILES) $(IMAGES)
	$(PDFLATEX) api-description.tex
	bibtex api-description
	makeindex api-description.idx
	$(PDFLATEX) api-description.tex
	$(PDFLATEX) api-description.tex
