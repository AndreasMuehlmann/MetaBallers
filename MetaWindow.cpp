#include <SDL.h>

int main(int heigth, int length) {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *win = SDL_CreateWindow("Hello World!", 100, 100, 300, 300, SDL_WINDOW_SHOWN);
    return 0;
    //Create Balls
    //insert balck background
    //define walls
    //insert "glowing" text "Press Escape to Start" Can be changed to another button later
    if( event.key.keysym.sym = SDLK_ESCAPE )
    {
    //if pressed
    goto loop;
    }
}

void loop()
{
    class Collision()
    {
        //if x & y of two ore more circles are the same
        //start animation
        //If x & y are the same as wall
        //Prove which of the 8 cases takes place and rebound it
    }
    class Move (int x, int y)
    {   
        //Initially Movement of balls. Have to change after collision with wall
        //Ball 1 = x+1 & y+1
        //Ball 2 = x+1 & y-1
        //Ball 3 = x-1 & y+1
        //Ball 4 = x-1 & y-1
    }
}
