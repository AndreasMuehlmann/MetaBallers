#include <iostream>
#include <SDL2/SDL.h>
#include <list>
#include <thread>

#include "Window.h"

using namespace std;

const int BORDER_WIDTH = 100;

int WIDTH, HEIGHT;
int SIZE;

bool(*m_draw)(int x, int y);

SDL_Window *window;
SDL_Renderer *renderer;

Uint32 *pixels;

void initWindow(int width, int height, bool(*draw)(int x, int y)) {
	WIDTH = width;
	HEIGHT = height;
	SIZE = WIDTH * HEIGHT;
	m_draw = draw;

    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow("MetaBallers", 100, 100, WIDTH, HEIGHT, 0);
    renderer = SDL_CreateRenderer(window, -1, 0);
}

void loop() {

	SDL_Event event;
    while (true) {
      
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);
	    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

		// Looping through every pixel
		for (int x = 0; x < WIDTH; x++) {
			for (int y = 0; y < HEIGHT; y++) {
				if(m_draw(x, y) == 1) {
					SDL_RenderDrawPoint(renderer, x, y);
				}
			}
		}

        if(SDL_PollEvent(&event)) {
            if(SDL_QUIT == event.type) {
                break;
            }
        }
		
        SDL_RenderPresent(renderer);
    }

}

void closeWindow() {
    delete[] pixels;
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
	
}

void setDrawMethod(bool(*draw)(int x, int y)) {
	m_draw = draw;
}
