/*
すぬけ君は1,2,3の番号がついた3つのマスからなるマス目を持っています。各マスには0か1が書かれており、マスiにはSiが書かれています。
すぬけ君は1が書かれたマスにビー玉を置きます。ビー玉が置かれるマスがいくつあるか求めよ。

CONST   :S1,S2,S3 is 0 or 1;

INPUT   :S1S2S3
OUTPUT  :答えを出力せよ

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int Total=0;

    cin >> s;

    if(s[0]=='1')Total++;
    if(s[1]=='1')Total++;
    if(s[2]=='1')Total++;

    cout << Total << endl;
    
}