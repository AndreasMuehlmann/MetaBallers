#include <iostream>
using namespace std;

#include <SDL2/SDL.h>
#include "Window.h"

const int WIDTH = 1000, HEIGHT = 800;
const int BORDER_WIDTH = 100;
bool print = true;

struct circle {
  int x, y, r;
  circle (int x, int y, int r) {
	this->x = x;
	this->y = y;
	this->r = r;
  }
};

circle c = circle(WIDTH / 2, HEIGHT / 2, BORDER_WIDTH);

bool draw(int x, int y);

int main() {
	initWindow(1000, 800, &draw);
	loop();
	closeWindow();
}

bool draw(int x, int y) {
	// Drawing a circle (not the method we will use!)
	if((x - c.x) * (x - c.x) +
        (y - c.y) * (y - c.y) <= c.r * c.r) {
      return 1;
    }
	 
	// Drawing the Border
	if (y < BORDER_WIDTH || y > HEIGHT - BORDER_WIDTH || x < BORDER_WIDTH || x > WIDTH - BORDER_WIDTH)
			return 1;
	return 0;
}
