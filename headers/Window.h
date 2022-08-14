#pragma once
using namespace std;

#include <vector>

#define PRINTL(x) std::cout << x << std::endl
#define PRINT(x) std::cout << x

void initWindow(int width, int height);
void update();
void drawGrid(vector<vector<bool>> grid);
void closeWindow();
