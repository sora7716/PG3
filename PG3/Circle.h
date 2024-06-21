#pragma once
#include "IShape.h"
#include <iostream>
class Circle :public IShape {

public://構造体

	//円の面積を求めるのに使う
	typedef struct Material {
		float radius;//半径
		float pi;//円周率
		float area;//面積
	}Material;

public://メンバ関数

	/// <summary>
	/// コンストラクタ
	/// </summary>
	Circle();

	//デストラクタ
	~Circle();

	/// <summary>
	/// 面積を求める
	/// </summary>
	void Size()override;

	/// <summary>
	/// 面積を出力
	/// </summary>
	void Draw()override;

private://メンバ変数
	Material material_;//素材
};

