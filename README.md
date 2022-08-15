# METAbALLERS
A Project in wich we make a meta ball simulation.
How it could look: "https://github.com/AndreasMuehlmann/MetaBallers/files/8873628/Metaballs.Draw.1.pdf".

## Theory

The balls are just saved as points representing their centers.
Then for each pixel, the distance to all ball centers will be calculated and summed up (The closer the higher the value).
When the pixel's vaue is bigger than a certain threshold it will be drawn.

## Distance Calculation

First the distance for each pixel to each ball is calculated.

```python
distanceToBall = |(x, y) - (ball.x, ball,y)|
```

## Value Calculation

The resulting number is smaller the closer the pixel is to a ball, so it must be reversed.
The largest distance is from one corner to it's diagonal corner, so this will be the maximum distance.
Then this can be converted to a number between 1 and 0. 1 being on the center of the ball, 0 being the maximum distance away.

```python
maximumDistance = |(SCREEN_WIDTH, SCREEN_HEIGHT)|
reversedDistance = maximumDistance - distanceToBall
valuePerBall = reversedDistance / maximumDistance
```

Then all the values for the Different balls will be added together.

!!! The value is only between 0 and 1 regarding only one ball.

## Threshold

The value of the threshold can be seen as a percentage of the maximum distance.
Hence it should be between 0 and 1.

# Future Features

- Different Color for each ball.
- Different weight (= radius) for each ball.

# QUICKSTART

Only tested on ArchLinux

Install SDL2 on you System (Not included in the Project)

Clone the repository with "git clone https://github.com/AndreasMuehlmann/MetaBallers.git"


# EXECUTING

- Recompile & Run:
```sh
$ make
```
or
```sh
$ make run
```

- Only Compile:
```sh
$ make MetaBallers
```

- Only Run:
```sh
$ bin/MetaBallers
```

- Switch between Console and Gui:
Go into main.cpp and comment out the following line:
```cpp
7 // Comment out the following line for the Console Version
8 #define gui
```

# SDL2

- Install on Arch:
```sh
$ sudo pacman -S sdl2
```
