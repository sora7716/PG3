#pragma once
#include "Stationery.h"
class Ruler:public Stationery{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Ruler();
	/// <summary>
	/// デストラクタ
	/// </summary>
	~Ruler()override;
	/// <summary>
	/// 取り出す
	/// </summary>
	void TakeOut()override;
};

