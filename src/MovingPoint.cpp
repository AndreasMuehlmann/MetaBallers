#include <iostream>
#include <vector>
using namespace std;

#include "MovingPoint.h"

MovingPoint::MovingPoint(vector<int> space, vector<int> pos, vector<int> vel) {
  this->space = space;
  this->pos = pos;
  this->vel = vel;

  if (pos.size() != vel.size() || pos.size() != space.size()) {
    cout << "Position, velocity and space have to be of same size." << endl;
    exit(1);
  }

  dimensions = space.size();
}

void MovingPoint::move() {
  for (int dimension = 0; dimension < dimensions; ++dimension) {
    if (isDimensionColliding(dimension)) {
      reverseVel(dimension);
    }
    pos[dimension] += vel[dimension];
  }
}

bool MovingPoint::isDimensionColliding(int dimension) {
  return pos[dimension] <= 0 || space[dimension] <= pos[dimension];
}

void MovingPoint::reverseVel(int dimension) {
  vel[dimension] = vel[dimension] * -1;
}

vector<int> MovingPoint::getPos() { return pos; }
