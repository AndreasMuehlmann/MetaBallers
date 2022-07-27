#include <iostream>

using namespace std;

int main() {
	int array[10] = {};
	cout << sizeof(array)/sizeof(array[0]) << endl;
}

