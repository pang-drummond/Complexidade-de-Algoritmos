
all: algo1.pdf algo2.pdf


pde.pdf: pde.md
	pandoc -t beamer --slide-level=2 -f markdown algo1.md -o algo1.pdf

algo1.pdf: algo1.md
	pandoc -t beamer --slide-level=2 -f markdown algo1.md -o algo1.pdf

algo2.pdf: algo2.md
	pandoc -t beamer --slide-level=2 -f markdown algo2.md -o algo2.pdf
