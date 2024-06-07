#pragma once
#include <iostream>
using namespace std;

class Stationery{

public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Stationery();

	/// <summary>
	/// デストラクタ
	/// </summary>
	virtual~Stationery();

	/// <summary>
	/// 取り出す
	/// </summary>
	virtual void TakeOut();

};

