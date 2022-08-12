#pragma once

#include <vector>
using namespace std;

class MovingPoint {

private:
  vector<int> pos;
  vector<int> space;
  vector<int> vel;
  int dimensions;

  bool isDimensionColliding(int dimension);
  void reverseVel(int dimension);

public:
  MovingPoint(vector<int> space, vector<int> pos, vector<int> vel);
  void move();
  vector<int> getPos();
};
