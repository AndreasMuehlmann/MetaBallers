#pragma once

#include <vector>
using namespace std;

#include "MovingPoint.h"

class MetaBallManager {
private:
  vector<float> space;
  vector<MovingPoint *> metaBallCenters;

public:
  MetaBallManager(vector<float> space, int metaBallCount);
  void update();
  vector<vector<int>> giveState();
};
