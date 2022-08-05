#pragma once


#define PRINTL(x) cout << x << endl
#define PRINT(x) cout << x

void initWindow(int width, int height, bool(*draw)(int x, int y));
void loop();
void closeWindow();
