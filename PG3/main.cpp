#include <cstdio>
#include <iostream>
#include "Comparison.h"
using namespace std;

int main() {
	double instance[6] = {};//初期化
	//三つの型を合わせる
	  // インスタンス1: int型、float型、double型の組み合わせ
    Comparison<int, float, double> instance1(1, 2.5f, 3.7);
    // インスタンス2: int型、double型、float型の組み合わせ
    Comparison<int, double, float> instance2(2, 4.2, 5.5f);
    // インスタンス3: float型、int型、double型の組み合わせ
    Comparison<float, int, double> instance3(3.5f, 6, 7.8);
    // インスタンス4: float型、double型、int型の組み合わせ
    Comparison<float, double, int> instance4(4.5f, 8.9, 10);
    // インスタンス5: double型、int型、float型の組み合わせ
    Comparison<double, int, float> instance5(5.6, 11, 12.3f);
    // インスタンス6: double型、float型、int型の組み合わせ
    Comparison<double, float, int> instance6(6.7, 13.4f, 14);


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