#pragma once
template<typename Type1,typename Type2,typename Type3>
class Comparison
{
public://メンバ関数

	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="num1">int型</param>
	/// <param name="num2">float型</param>
	/// <param name="num3">double型</param>
	Comparison(Type1 num1, Type2 num2,Type3 num3) :num1_(num1), num2_(num2),num3_(num3) {};


	void Sum() {
		result_ = static_cast<double>(num1_ + num2_ + num3);
	}

	//Min関数
	Type3 Min(const Comparison& compare1, const Comparison& compare2) {
		compare1.Sum();
		compare2.Sum();
		if (compare1.result_ > compare2.result_) {
			return compare2.result_;
		}
		else if (compare1.result_ < compare2.result_) {
			return compare1.result_;
		}
		return 0;
	}

private://メンバ変数
	Type1 num1_;
	Type2 num2_;
	Type3 num3_;
	double result_;
};