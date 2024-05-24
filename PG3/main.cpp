#include <cstdio>
#include <iostream>
#include "ClassName.h"
using namespace std;

int main() {
	ClassName<int> num1{2,3};
	ClassName<float> num2{2.3f,3.9f};

	cout << num1.add() << endl;
	cout << num2.add() << endl;
	return 0;
}