﻿// C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>

using namespace std;

int state[100005];
int penal[100005];


int main()
{
	int n, m;
	int num;
	string s;
	cin >> n >> m;
	int score = 0;
	int pena = 0;
	for (int i = 0; i < m; i++) {
		cin >> num >> s;

		if (state[num] == 0) {
			if (s == "AC") {
				score++;
				state[num] = 1;
				pena += penal[num];
			}
			else {
				penal[num]++;
			}
		}
	

	}
	cout << score <<" "<< pena << endl;;

	return 0;


}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
