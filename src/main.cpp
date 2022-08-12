#include <iostream>
using namespace std;

#include "MetaBallManager.h"

const int WIDTH = 80;
const int HEIGHT = 40;
const int METABALLCOUNT = 1;

void printGrid(vector<vector<bool>> grid);

int main(int argc, char **argv) {

  vector<int> space = {WIDTH, HEIGHT};
  MetaBallManager *metaBallManager = new MetaBallManager(space, METABALLCOUNT);

  for (int i = 0; i < 10; ++i) {
    metaBallManager->update();
    vector<vector<bool>> grid = metaBallManager->getGrid();
    printGrid(grid);
  }
  delete metaBallManager;
  return 0;
}

void printGrid(vector<vector<bool>> grid) {
  for (int y = 0; y < HEIGHT; ++y) {
    for (int x = 0; x < WIDTH; ++x) {
      cout << grid[x][y];
    }
    cout << endl;
  }
  for (int _ = 0; _ < 10; ++_) {
    cout << endl;
  }
}
