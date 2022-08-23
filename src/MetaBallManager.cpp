#include <cmath>
#include <iostream>
#include <stdlib.h>
using namespace std;

#include <vector>

#include "MetaBallManager.h"
#include "MovingPoint.h"

MetaBallManager::MetaBallManager(vector<int> space, int metaBallCount) {
  this->space = space;

  threshold = 10;

  for (int i = 0; i < metaBallCount; ++i) {
    vector<int> pos = {space[0] / 4, 2 * space[1] / 3};
    vector<int> vel = {(rand() - rand()) % 3, (rand() - rand()) % 3};

    metaBallCenters.push_back(new MovingPoint(space, pos, vel));
  }
}

void MetaBallManager::update() {
  for (MovingPoint *metaBallCenter : metaBallCenters) {
    metaBallCenter->move();
  }
}

vector<vector<bool>> MetaBallManager::getGrid() {
  vector<vector<bool>> grid;
  vector<bool> column;
  for (int x = 0; x < space[0]; ++x) {
    for (int y = 0; y < space[1]; ++y) {
      column.push_back(isInMetaBall(x, y));
    }
    grid.push_back(column);
    column.clear();
  }
  return grid;
}

bool MetaBallManager::isInMetaBall(int x, int y) {
  float distanceMetaBalls = 0;

  for (MovingPoint *metaBallCenter : metaBallCenters) {
    vector<int> pos = metaBallCenter->getPos();
    distanceMetaBalls += sqrt(pow(x - pos[0], 2) + pow(y - pos[1], 2));
  }
  return distanceMetaBalls < threshold;
}
