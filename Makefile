run:		App.exe
	./bin/App.exe

App.exe:	src/*.cpp
	g++ -I include -I include/sdl2 -I include/headers -L lib -o bin/App src/*.cpp -lmingw32 -lSDL2main -lSDL2