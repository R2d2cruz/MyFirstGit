# $< : La primera dependencia
# $@: target

all: fig.pdf

sumas.x: sumas.cpp

%.exe: %.cpp
	g++ $< -o $@

datos.txt: sumas.exe
	$< > $@

fig.pdf: plot.gp datos.txt
	gnuplot $<

clean:
	rm -f a.out *.exe *.txt *.pdf