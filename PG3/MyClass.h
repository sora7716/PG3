#pragma once
class MyClass
{
public://メンバ関数

	void Func1();
	void Func2();

private://メンバ変数
	//メンバ関数ポインタのテーブル
	static void (MyClass::* spFuncTable[])();
};



