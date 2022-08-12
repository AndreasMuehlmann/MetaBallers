run:		MetaBallers
	./bin/MetaBallers

MetaBallers:	src/*.cpp
	g++ -I headers -o bin/MetaBallers src/*.cpp -lSDL2
