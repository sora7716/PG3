#pragma once
#include <cmath>
#define _USE_MATH_DEFINES
class IShape{

public://メンバ関数

	/// <summary>
	/// デストラクタ
	/// </summary>
	virtual ~IShape() = default;

	/// <summary>
	/// 仮想のSize
	/// </summary>
	virtual  void Size() = 0;

	/// <summary>
	/// 仮想のDraw
	/// </summary>
	virtual  void Draw() = 0;

public://必要な変数

	static inline const int SHAPE_NUM = 2;//図形の数

	//図形の種類
	enum class ShapeType {
		circle,
		rectangle,
	};
};

