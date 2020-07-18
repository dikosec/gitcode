/*
QUESTION    :縦Hピクセル、横Wピクセルの画像があります。各ピクセルは英小文字で表されます。上からi番目、左からj番目のピクセルはaij
             です。この画像の周囲1ピクセルを'#'で囲んだものを出力してください。

CONST       :1<=H,W<=100
             aij are all small letter.

INPUT       :H W
             a11 ... a1W
             .
             .
             aH1 ... aHW

OUTPUT      :画像の周囲1ピクセルを'#'で囲んだものを出力せよ。
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int H,W,i,j;
    vector<vector<char>> a(100,vector<char>(101));
    vector<vector<char>> b(102,vector<char>(102));
    
    cin >> H >> W;
    
    for(i=0;i<H;i++){
        for(j=0;j<W;j++){
            cin >> a.at(i).at(j);
        }
    }

    for(i=0;i<H+2;i++){
        for(j=0;j<W+2;j++){
            b.at(i).at(j)='#';
        }
    }

    for(i=0;i<H;i++){
        for(j=0;j<W;j++){
            b.at(i+1).at(j+1)=a.at(i).at(j);
        }
    }

    for(i=0;i<H+2;i++){
        for(j=0;j<W+2;j++){
            cout << b.at(i).at(j);
        }
        cout << endl;
    }
}