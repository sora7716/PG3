#include <iostream>
#include <cstdio>
#include "Pencil.h"
#include "Ruler.h"
using namespace std;

int main() {
	Stationery* stationery[2] = { nullptr };//文房具クラスの宣言
	//文房具クラスの派生クラスを生成
	for (int i = 0; i < 2; i++) {
		if (i == 0) {
			stationery[i] = new Pencil();//鉛筆クラスを生成
		}
		else {
			stationery[i] = new Ruler();//定規クラスの生成
		}
		stationery[i]->TakeOut();//クラスの表示
	}
	delete *(stationery);//削除
	return 0;
}