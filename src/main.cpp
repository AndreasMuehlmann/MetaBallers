#include <iostream>
using namespace std;

#include <SDL2/SDL.h>
#include "Window.h"

const int WIDTH = 1000, HEIGHT = 800;
const int BORDER_WIDTH = 100;
bool print = true;

int main() {
	initWindow(1000, 800);
	loop();
	closeWindow();
}
