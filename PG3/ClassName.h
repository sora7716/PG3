#pragma once
template<typename Type>
class ClassName
{
public:
	//メンバ変数
	Type a_;
	Type b_;

	//コンストラクタ
    ClassName(Type a, Type b): a_(a), b_(b) {};

	//メンバ関数
	Type add() {
		return static_cast<Type>(a_ + b_);
	}
};

