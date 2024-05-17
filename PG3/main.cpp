#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int>a = { -10,321,-3,50 };

	cout << "全要素を表示します" << endl;

	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}

	sort(a.begin(), a.end());
	cout << "全要素を表示します" << endl;
	
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}
	return 0;
}