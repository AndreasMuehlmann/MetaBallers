#include <iostream>
using namespace std;

#include "MetaBallManager.h"

const int WIDTH = 1000;
const int HEIGHT = 800;
const int METABALLCOUNT = 1;

int main(int argc, char **argv) {

  vector<float> space = {WIDTH, HEIGHT};
  vector<float> pos = {5, 6};
  vector<float> vel = {1, 0.5};
  MetaBallManager metaBallManager(space, METABALLCOUNT);

  for (int i = 0; i < 1000; ++i) {
    metaBallManager.update();
  }
  return 0;
}
