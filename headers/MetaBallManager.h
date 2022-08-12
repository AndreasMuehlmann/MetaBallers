#pragma once

#include <vector>
using namespace std;

#include "MovingPoint.h"

class MetaBallManager {
private:
  float threshold;
  vector<int> space;
  vector<MovingPoint *> metaBallCenters;
  bool isInMetaBall(int x, int y);

public:
  MetaBallManager(vector<int> space, int metaBallCount);
  void update();
  vector<vector<bool>> getGrid();
};
