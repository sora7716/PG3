#include <cstdio>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;

int main() {

	//コピーの場合の計測
	auto startCpy = high_resolution_clock::now();
	string moji(1000000, 'a');
	auto endCpy = high_resolution_clock::now();
	microseconds cpyTime = duration_cast<microseconds>(endCpy - startCpy);

	//移動の場合の計測
	auto startMove = high_resolution_clock::now();
	string&& mojiCpy = move(moji);
	auto endMove = high_resolution_clock::now();
	microseconds moveTime = duration_cast<microseconds>(endMove - startMove);

	double resultCpy = cpyTime.count();
	double resultMove = moveTime.count();
	cout << "1000000文字を移動とコピーで比較しました。" << endl;
	this_thread::sleep_for(seconds(5));
	cout << "コピー:" << resultCpy << "μs" << endl;
	cout << "移動:" << resultMove << "μs" << endl;
	return 0;
}