#include <cstdio>
#include <iostream>
#include "Comparison.h"
using namespace std;

int main() {
	double instance[6] = {};//初期化
	//三つの型を合わせる
	for (int i = 0; i < 6; i++) {
	  instance[i] = Comparison<int, float, double>::Sum(1*i, 1.9f*i, 0.7*i);
	}

	//比べて表示する
	for (int i = 0; i < 6; i++) {
		if (i != 5) {
		Comparison<int, float, double>::Update(instance[i], instance[i + 1]);
		}
		else {
			Comparison<int, float, double>::Update(instance[i], instance[0]);
		}
	}


	return 0;
}