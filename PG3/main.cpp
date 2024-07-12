#include <cstdio>
#include <iostream>
#include <thread>
using namespace std;

//出力の処理
void Printf(int number) {
	cout << "thread" << number << endl;
}

int main() {

	//thread1の表示
	thread th1(Printf, 1);
	th1.join();//開放

	//thread2の表示
	thread th2(Printf, 2);
	th2.join();//開放

	//thread3の表示
	thread th3(Printf, 3);
	th3.join();//開放
	
	return 0;
}