sumas.exe: sumas.cpp
	g++ -g sumas.cpp -o sumas.exe

datos.txt: sumas.exe
	.\sumas.exe > datos.txt

clean:
	rm -f *.exe datos.txt