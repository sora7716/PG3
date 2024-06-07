#include <cstdio>
#include <iostream>
#include "Comparison.h"
using namespace std;

int main() {
	//値を代入
	Comparison<int,   int   >instance1( 1,     2      );
	Comparison<float, float >instance2( 76.0f, 2.166f );
	Comparison<double,double>instance3( 212.3, 213.7  );
	Comparison<float, double>instance4( 2.3f,  3.7    );
	Comparison<int,   float >instance5( 4,     2.0f   );
	Comparison<double,int   >instance6( 22.3,  34     );

	//結果を表示
	instance1.Result();
	instance2.Result();
	instance3.Result();
	instance4.Result();
	instance5.Result();
	instance6.Result();

	return 0;
}