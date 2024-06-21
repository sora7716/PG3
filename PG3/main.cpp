#include <cstdio>
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main() {
	
	IShape* shape[IShape::SHAPE_NUM] = { nullptr };//初期化

	for (int i = 0; i < IShape::SHAPE_NUM; i++) {
		if (i == 0) {
			shape[i] = new Circle();//生成
		}
		else {
			shape[i] = new Rectangle();//生清
		}
	}
	//円
	int shapeType = static_cast<int>(IShape::ShapeType::circle);
	shape[shapeType]->Size();//面積
	shape[shapeType]->Draw();//値を描画

	//矩形
	shapeType = static_cast<int>(IShape::ShapeType::rectangle);
	shape[shapeType]->Size();//面積
	shape[shapeType]->Draw();//値を描画

	delete *shape;//削除
	return 0;
}