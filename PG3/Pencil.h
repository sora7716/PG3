#pragma once
#include "Stationery.h"
class Pencil:public Stationery {
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Pencil();
	/// <summary>
	/// デストラクタ
	/// </summary>
	~Pencil()override;
	/// <summary>
	/// 取り出す
	/// </summary>
	void TakeOut()override;
};
