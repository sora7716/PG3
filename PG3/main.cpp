#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

vector<string>ParseCustomASCII(const string& filePath) {
	ifstream file(filePath);//ファイルの読み込み
	vector<string>data;//読み込んだデータを格納する可変長配列
	string line;//ファイルから読み込んだ1行を格納する変数

	//開けなかったとき
	if (!file.is_open()) {
		cerr << "Unable to open file;" << filePath << endl;
		return data;//空のdataを返す
	}
	//一行ずつずつ読み込む
	while (getline(file, line)) {
		stringstream lineStream(line);//読み込んだ行を文字列ストリームに変換
		string cell;//行から切り出した単語を格納する変数

		while (getline(lineStream, cell, ',')) {//lineStreamで行を読み込みカンマ区切りで単語をcellに格納する
			data.push_back(cell);//カンマごとに区切られた単語をrow格納
		}
	}
	return data;//パースしたデータを返す
}

void Printf(vector<string> data) {
	for (const auto& row : data) {
		// 文字列の先頭と末尾の "[" と "]" を削除して出力
		cout << row.substr(1, row.size() - 2) << endl;
	}
}

int main() {
	vector<string> data = ParseCustomASCII("PG3_03_02.txt");//ファイルをパースしてデータを取得
	//データのソート
	sort(data.begin(), data.end());
	//パースシテデータを出力
	Printf(data);
	return 0;
}
