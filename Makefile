run:		Metaballers
	./bin/Metaballers

Metaballers:	src/*.cpp
	g++ -o bin/Metaballers src/*.cpp -lSDL2
