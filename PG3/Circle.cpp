#include "Circle.h"
#include <numbers>

//コンストラクタ
Circle::Circle() {
	material_ = {};//素材
}

//デストラクタ
Circle::~Circle() {
}

//面積を求める
void Circle::Size() {
	material_.radius = 20;//半径
	material_.pi = std::numbers::pi_v<float>;//円周率
	material_.area = powf(material_.radius, 2.0f) * material_.pi;//面積
}

//面積を出力
void Circle::Draw() {
	std::cout << material_.area << std::endl;//表示
}
