#pragma once

#include <vector>
using namespace std;

class MovingPoint {

private:
  vector<float> pos;
  vector<float> space;
  vector<float> vel;
  int dimensions;

  bool isDimensionColliding(int dimension);
  void reverseVel(int dimension);

public:
  MovingPoint(vector<float> space, vector<float> pos, vector<float> vel);
  void move();
};
