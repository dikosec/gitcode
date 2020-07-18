/*
QUESTION    :文字列sと整数i(1<=i<=|s|)が与えられます。sのi文字目を出力してください。
             なお、|s|は文字列sの長さを表します。

CONST       :1<=|s|<=100
             s consist from small letter
             1<=i<=|s|

INPUT       :s
             i

OUTPUT      :sのi文字目を出力せよ
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    string s;

    cin >> s >> i;

    cout << s.at(i-1) << endl;
}