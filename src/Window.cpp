using namespace std;

#include <iostream>
#include <SDL2/SDL.h>
#include <list>
#include <thread>

#include "Window.h"

const int BORDER_WIDTH = 100;

int WIDTH, HEIGHT;
int SIZE;

SDL_Window *window;
SDL_Renderer *renderer;

Uint32 *pixels;

void initWindow(int width, int height) {
	WIDTH = width;
	HEIGHT = height;
	SIZE = WIDTH * HEIGHT;

    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow("MetaBallers", 100, 100, WIDTH, HEIGHT, 0);
    renderer = SDL_CreateRenderer(window, -1, 0);
}

// call once per frame
void update() {

    SDL_RenderPresent(renderer);
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

	SDL_Event event;
    if(SDL_PollEvent(&event)) {
        if(SDL_QUIT == event.type) {
          closeWindow();
		  exit(0);
        }
    }
}

void drawGrid(vector<vector<bool>> grid) {
	for (int y = 0; y < grid.size(); y++) {
		for (int x = 0; x < grid[0].size(); x++) {
			if(grid[y][x] == 1)
				SDL_RenderDrawPoint(renderer, x, y);
		}
	}
}

void closeWindow() {
    delete[] pixels;
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
	
}
