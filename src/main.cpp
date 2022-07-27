#include <iostream>
using namespace std;

#include <SDL2/SDL.h>


const int WIDTH = 1000, HEIGHT = 800;
const int BORDER_WIDTH = 100;
bool print = true;

int main() {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *window = SDL_CreateWindow("MetaBallers", SDL_WINDOWPOS_CENTERED - WIDTH / 2,
                                          SDL_WINDOWPOS_CENTERED - HEIGHT / 2, WIDTH, HEIGHT, 0);
    if (NULL == window) {
        cout << "Could not create window: " << SDL_GetError() << endl;
        return 1;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_Texture *texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
                                              SDL_TEXTUREACCESS_STATIC, WIDTH, HEIGHT);
    Uint32 *pixels = new Uint32[WIDTH * HEIGHT];
    SDL_Event *event;

    while (true) {
	
	for (int i = 0; i < WIDTH * HEIGHT; i++) {
		
		int x = i % WIDTH;
		int y = (i - x) / WIDTH;

		// Drawing the Border
		if (y < BORDER_WIDTH || y > HEIGHT - BORDER_WIDTH || x < BORDER_WIDTH || x > WIDTH - BORDER_WIDTH) {
				pixels[i] = 255;
		}

			
		
	}

        SDL_UpdateTexture(texture, NULL, pixels, WIDTH * sizeof(Uint32));

        if(SDL_PollEvent(event)) {
            if(SDL_QUIT == event->type) {
                break;
            }
        }
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);
    }

    delete[] pixels;
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
