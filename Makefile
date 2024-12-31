bin/testCambio: monedas.cpp testCambio.cpp
	mkdir -p bin
	g++ -o bin/testCambio testCambio.cpp

bin/testMochila: mochila.cpp testMochila.cpp
	mkdir -p bin
	g++ -o bin/testMochila testMochila.cpp
	

clean:
	rm -rf *.o *.ghc bin
