﻿// D.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long>a(n);
    vector<long long> total(n);
    vector<long long>M(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    total[0] = a[0];
    for (int i = 1; i < n; i++) {
        total[i] = total[i - 1] + a[i];
    }
   long long  max = 0;
   for (int i = 0; i < n; i++) {
       if (max < total[i]) {
           max = total[i];
       }
       M[i] = max;
    }

   long long gmax = 0;
   long long ruikei = 0;
   for (int i = 0; i < n; i++) {
       if (ruikei + M[i] > gmax) {
           gmax = ruikei + M[i];
       }
       ruikei += total[i];
   }

   cout << gmax << endl;

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
