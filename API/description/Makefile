PDFLATEX=pdflatex  -file-line-error -interaction errorstopmode
IMAGES= \
  images/abstract-hardware-architecture.pdf \
  images/software-architecture.pdf

ASN1= \
  asn1/train-interface.asn \
  asn1/example.asn \
  asn1/messaging-api.asn

LATEXFILES= \
  api-description.tex \
  concrete-interface.tex \
  hardware-arch.tex \
  info-flows.tex \
  intro-chapter.tex \
  software-arch.tex \
  time-constraints.tex \
  asn1-primer.tex


default: api-description.pdf

api-description.pdf: $(LATEXFILES) $(IMAGES) $(ASN1) \
	api-description.bib asn1.sty
	$(PDFLATEX) api-description.tex
	bibtex api-description
	makeindex api-description.idx
	$(PDFLATEX) api-description.tex
	$(PDFLATEX) api-description.tex

clean:
	-rm api-description.pdf
	-rm *.aux *.lof *.log *.lot *.toc *.bbl *.blg *.idx *.ilg *.ind *.out

ASN1_VALIDATE:=$(ASN1:%.asn=%.asn-validate)

validate-asn1: $(ASN1_VALIDATE)

%.asn-validate: %.asn
	asn1c -E -F $<
