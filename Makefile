run:		MetaBallers
	./bin/MetaBallers

MetaBallers:	src/*.cpp
	g++ -Iheaders -o bin/MetaBallers src/*.cpp -lSDL2
