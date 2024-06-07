#pragma once
#include <iostream>
using namespace std;
template<typename Type1, typename Type2, typename Type3>
class Comparison {

public://メンバ関数

	/// <summary>
	/// コンストラクター
	/// </summary>
	/// <param name="num1">数字1</param>
	/// <param name="num2">数字2</param>
	/// <param name="num3">数字3</param>
	Comparison(Type1 num1, Type2 num2, Type3 num3) :num1_(num1), num2_(num2), num3_(num3) {};

	/// <summary>
	/// Min関数
	/// </summary>
	/// <returns>一番小さい数字</returns>
	auto Min() {
		if (num1_ < num2_) {
			if (num1_ < num3_) {
				return static_cast<double>(num1_);
			}
		}
		else if (num2_ < num3_) {
			return static_cast<double>(num2_);
		}
		return static_cast<double>(num3_);
	}

	/// <summary>
	/// Min関数の結果を出力
	/// </summary>
	void Result() {
		cout << Min() << endl;
	}

private://メンバ変数
	Type1 num1_;
	Type2 num2_;
	Type3 num3_;
};
