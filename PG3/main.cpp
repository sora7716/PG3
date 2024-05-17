#include <iostream>
#include <cstdio>
#include <algorithm>
#include <array>
#include <functional>
#include <Windows.h>
using namespace std;

int main(int argc,char const*argv[]) {
	//arrayの中身をすべて表示
	auto dump = [](auto a,auto time) {
		for (auto i : a) {
			Sleep(time*1000);//少し待つ
			cout << i ;
		}
		cout << endl;

	};
	array<int, 5>a1{ 1,2,3,4,5 };
	array<int, 5>a2{ 1,2,3,4,5 };
	replace(a1.begin(), a1.end(), 3, 0);//a1の3を0に置換
	replace(a2.begin(), a2.end(), 2, 0);//a2の2を0に置換

	//表示
	dump(a1,0.3f);
	dump(a2,3);
	return 0;
}