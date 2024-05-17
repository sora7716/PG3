#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	//int型の動的配列a(要素:5)
	vector<int>a = { -10,321,-3,50 };

	cout << "全要素を表示します:ソート前" << endl;
	//全要素の表示
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}

	sort(a.begin(), a.end());//昇順に並び変える
	cout << "全要素を表示します:昇順" << endl;
	//全要素の表示:昇順
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}

	reverse(a.begin(), a.end());//降順に並び変える
	cout << "全要素を表示します:降順" << endl;
	//全要素の表示:降順
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}
	return 0;
}