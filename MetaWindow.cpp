#include <SDL.h>

int main(int heigth, int length) {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *win = SDL_CreateWindow("Metaballs", 100, 100, 300, 300, SDL_WINDOW_SHOWN);
    //Create Balls (white, blue, yellow, red/ r = 1cm?)
    // r = heigth = length;
    //define startPos_white, ...
    //insert black background
    //define walls
    while(event.key.keysim.sym != SDLK_ESCAPE)
    {cout << "Press Escape to Start";
    delay(500);}
    if( event.key.keysym.sym = SDLK_ESCAPE )
    {
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
        //If it was R.D. before -> go L.D. (R = right, L = Left, U = up, D = down) => from going up to down
        //else if it was R.U. before -> go L.U => from going down to up
        //else if it was L.D. before -> go R.D => from going up to down
        //else if it was L.U. before -> go R.U => from going down to up
        //else if it was straight left -> go straight right (x+1)
        //else if it was straight down -> go straight up (y+1)
        //else if it was straight up -> go straight down (y-1)
        //else if it was straight right -> go straight left (x-1)
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

void loop() {
    boolean done = False;
    ball
    while (!done) {
        ball.move()
    }
}

class Ball 
{
    def __init__(self)
    {
        self.pos = [random, random]
        self.vel = [random, random]
        self.size = [10, 10]
    }
    def move(self)
    {
        self.pos + self.vel
    }
    def collision
    {
        wenn an wand in x richtung
        x_vel * -1
        gleich für y
    }
    default

    sdl.draw_circle

    __OPENCL_MEMORY_SCOPE_DEVICE


    isColi
}
