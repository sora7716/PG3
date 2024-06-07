#include <cstdio>
#include <iostream>
#include "Comparison.h"
using namespace std;

int main() {
	//値の設定
	Comparison<int,   float,  double>comparison1( 6,     60.5f, 8.0    );
	Comparison<int,   double, float >comparison2( 50,    20.0,  98.12f );
	Comparison<float, int,    double>comparison3( 9.09f, 990,   9.0    );
	Comparison<float, double, int   >comparison4( 12.0f, 120.4, 2      );
	Comparison<double,float,  int   >comparison5( 234.8, 66.0f, 5      );
	Comparison<double,int,    float >comparison6( 6,     4,     1.0f   );
	//MIN関数を使用して結果を出力
	comparison1.Result();
	comparison2.Result();
	comparison3.Result();
	comparison4.Result();
	comparison5.Result();
	comparison6.Result();
	return 0;
}