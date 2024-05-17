#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc,char const*argv[]) {
	bool b_array[] = { true,false,true,true };
	size_t n_count = count(b_array, b_array + (sizeof(b_array)), true);//trueの数を数える
	cout << n_count << endl;
    return 0;
}