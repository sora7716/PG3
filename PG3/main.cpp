#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	//動的配列
	vector<int>a = { -10,321,-3,50,1 };
	//探索したいvector用のイテレータ
	vector<int>::iterator it;
	//指定した値を探索
	it = find(a.begin(), a.end(), -3);
	//指定した値が存在すれば
	if (it != a.end()) {
		cout << *it << endl;
	}
	return 0;
}