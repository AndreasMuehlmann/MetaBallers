#include <SDL.h>

int main() {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *win = SDL_CreateWindow("Hello World!", 100, 100, 300, 300, SDL_WINDOW_SHOWN);
    SDL_Delay(5000);
    return 0;
}
