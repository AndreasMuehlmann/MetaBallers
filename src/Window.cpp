#include <iostream>
#include <SDL2/SDL.h>
#include <list>
#include <thread>

#include "Window.h"

#define PRINTL(x) cout << x << endl
#define PRINT(x) cout << x

using namespace std;

const int BORDER_WIDTH = 100;

int WIDTH, HEIGHT;
int SIZE;

SDL_Window *window;
SDL_Renderer *renderer;
SDL_Texture *texture; 

Uint32 *pixels;

void initWindow(int width, int height) {
	WIDTH = width;
	HEIGHT = height;
	SIZE = WIDTH * HEIGHT;


    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow("MetaBallers", 100, 100, WIDTH, HEIGHT, 0);
    renderer = SDL_CreateRenderer(window, -1, 0);
    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STATIC, WIDTH, HEIGHT);
    pixels = new Uint32[SIZE];

}

void loop() {

	SDL_Event event;
    while (true) {
		
		// Looping through every pixel
		for (int i = 0; i < SIZE; i++) {
			
			int x = i % WIDTH;
			int y = (i - x) / WIDTH;
		
			// Drawing the Border
			if (y < BORDER_WIDTH || y > HEIGHT - BORDER_WIDTH || x < BORDER_WIDTH || x > WIDTH - BORDER_WIDTH) {
					pixels[i] = 255;
			}	
			
		}
        SDL_UpdateTexture(texture, NULL, pixels, WIDTH * sizeof(Uint32));


		PRINTL("#2");

        if(SDL_PollEvent(&event)) {

		PRINTL("#3");

            if(SDL_QUIT == event.type) {

		PRINTL("#4");

                break;
            }
        }


        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);
    }

}

void closeWindow() {
    delete[] pixels;
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
	
}

void addDrawMethod() {

}
