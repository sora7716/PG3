#include "MyClass.h"
#include <iostream>
using namespace std;
void MyClass::Func1(){
	cout << "Func1" << endl;
}

void MyClass::Func2(){
	cout << "Func2" << endl;
}

void(MyClass::* MyClass::spFuncTable[])() = {
	&MyClass::Func1,//要素1
	&MyClass::Func2,//要素2
};
