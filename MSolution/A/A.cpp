﻿
// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>

using namespace std;
int main()
{
	int x;

	cin >> x;

	if (x <= 599) {
		cout << "8" << endl;
	}
	else if (x <= 799) {
		cout << "7" << endl;

	}
	else if (x <= 999) {
		cout << "6" << endl;
	}
	else if (x <= 1199) {
		cout << "5" << endl;
	}
	else if (x <= 1399) {
		cout << "4" << endl;

	}
	else if (x <= 1599) {
		cout << "3" << endl;

	}
	else if (x <= 1799) {
		cout << "2" << endl;

	}
	else if (x <= 1999) {
		cout << "1" << endl;

	}

	return 0;

}

