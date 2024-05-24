#include <cstdio>
#include <iostream>
#include <Windows.h>
#include "Enemy.h"
using namespace std;

int main() {
	Enemy* enemy = new Enemy();//Enemyのインスタン
	enemy->Update();//更新処理
	delete enemy;//削除
	return 0;
}