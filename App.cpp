#include <iostream>
#include <SDL2/SDL.h>

const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char *argv[]) {
    SDL_Init(SDL_INIT_EVERYTHING);
    //asdasd

    SDL_Window *window = SDL_CreateWindow("MetaBallers", 100, 100, WIDTH, HEIGHT, SDL_WINDOW_RESIZABLE);

    if (NULL == window) {
        std::cout << "Could not create window: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Event *event;

    while (true) {
        if (SDL_PollEvent(event)) {
            if(SDL_QUIT == event->type) {
                break;
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
    
}