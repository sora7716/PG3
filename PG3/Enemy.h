#pragma once
#include <iostream>
using namespace std;

class Enemy {
public:

	/// <summary>
	/// 接近
	/// </summary>
	void Approach();
	
	/// <summary>
	/// 射撃
	/// </summary>
	void Attack();
	
	/// <summary>
	/// 離脱
	/// </summary>
	void Withdrawal();

	/// <summary>
	/// 更新処理
	/// </summary>
	void Update();

  const int kMovementPattern = 3;

private:
	/// <summary>
	/// メンバ関数ポインタ
	/// </summary>
	static void (Enemy::*EnemyActionTable[])();
};
