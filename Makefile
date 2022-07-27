run:		MetaBallers
	./bin/MetaBallers

MetaBallers:	src/*.cpp
	g++ -o bin/MetaBallers src/*.cpp -lSDL2
