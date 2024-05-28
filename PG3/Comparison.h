#pragma once
#include <iostream>
using namespace std;
template<typename Type1,typename Type2,typename Type3>
class Comparison
{
public://メンバ関数


	/// <summary>
	/// 一つにまとめる
	/// </summary>
	static double Sum(Type1 num1,Type2 num2,Type3 num3) {
		return static_cast<double>(num1 + num2 + num3);
	}

	/// <summary>
	/// 比べる
	/// </summary>
	/// <param name="compare1">比べる数字1</param>
	/// <param name="compare2">比べる数字2</param>
	/// <returns></returns>
	static Type3 Min(Type3 compare1,Type3 compare2) {
		
		if (compare2 > compare1) {
			return compare1;
		}
		else if (compare2 < compare1) {
			return compare2;
		}
		return 0;
	}

	/// <summary>
	/// 表示
	/// </summary>
	/// <param name="result"></param>
	static void Result(Type3 result) {
		cout << "小さい数字は:" << result << endl;
	}

	/// <summary>
	/// 更新処理
	/// </summary>
	/// <param name="compare1">比べる数字1</param>
	/// <param name="compare2">比べる数字2</param>
	static void Update(Type3 compare1, Type3 compare2) {
		Type3 result=Min(compare1, compare2);
		Result(result);
	}
};