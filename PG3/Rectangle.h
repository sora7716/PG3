#pragma once
#include "IShape.h"
class Rectangle :public IShape {

public://構造体


	typedef struct Material {
		float width;//横幅
		float height;//縦幅
		float area;
	}Material;

public://メンバ関数

	/// <summary>
	/// コンストラクタ
	/// </summary>
	Rectangle();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~Rectangle();

	/// <summary>
	/// 面積を求める
	/// </summary>
	void Size()override;

	/// <summary>
	/// 面積を出力
	/// </summary>
	void Draw()override;
private://メンバ変数
	Material material_;
};

