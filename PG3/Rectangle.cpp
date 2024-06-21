#include "Rectangle.h"
#include <iostream>

//コンストラクタ
Rectangle::Rectangle() {
	material_ = {};
}

//デストラクタ
Rectangle::~Rectangle() {
}

//面積を求める
void Rectangle::Size() {
	material_.width  = 50;//横幅
	material_.height = 20;//縦幅
	material_.area = material_.width * material_.height;//面積
}

//面積の出力
void Rectangle::Draw() {
	std::cout << material_.area << std::endl;
}
