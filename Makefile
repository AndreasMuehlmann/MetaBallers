run:		App.exe
	.\App.exe

App.exe:	App.cpp
	g++ -I src/include -L src/lib -o App App.cpp -lmingw32 -lSDL2main -lSDL2