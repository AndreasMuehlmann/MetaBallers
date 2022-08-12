#include <iostream>
#include <vector>
using namespace std;

#include "MetaBallManager.h"
#include "MovingPoint.h"

MetaBallManager::MetaBallManager(vector<float> space, int metaBallCount) {
  this->space = space;
  for (int i = 0; i < metaBallCount; ++i) {
    vector<float> pos = {10, 6};
    vector<float> vel = {1, 2};

    metaBallCenters.push_back(new MovingPoint(space, pos, vel));
  }
}

void MetaBallManager::update() {
  for (MovingPoint *metaBallCenter : metaBallCenters) {
    metaBallCenter->move();
  }
}
