#include <iostream>
#include <algorithm>
using namespace std;



int main(int argc,char const*argv[]) {
	int i_array[] = { 1,2,3 };
	for_each(
		begin(i_array), 
		end(i_array), 
		[](int& i) {
		cout << i << endl;
		}
	);//最後に入れた関数を逐次実行してくれる
	return 0;
}