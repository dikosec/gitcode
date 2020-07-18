/*
QUESTION    :H*Wのマス目が与えられます。
             入力において、全てのマスは文字で表されており、'.'は空きマス、'#'は爆弾マスに対応します。
             マス目はH個の文字列S1,...,SHで表されます。
             文字列Siのj文字目は、マス目の上からi番目、左からj番目のマスに対応します。(1<=i<=H,1<=j<=W)
             イルカは各空きマスの上下左右および斜めの8方向で隣接しているマスに爆弾マスが何個あるか気になっています。
             そこで、各空きマスに対応する'.'を、その空きマスの周囲8方向に隣接するマスにおける爆弾マスの個数を表す数字で置き換えることにしました。
             以上の規則で置き換えられた後のマス目を出力してください。

CONST       :1<=H,W<=50
             Siは'#'と'.'からなる長さWの文字列

INPUT       :H W
             S1
             .
             .
             SH

OUTPUT      :置き換えられた後のマス目をH行の文字列で出力せよ
             i行目に出力する文字列Tiの長さはWであり、Tiのj文字目は、置き換えられた後のマス目の上からi番目、左からj番目のマスに対応させよ。
             (1<=i<=H,1<=j<=W)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int H,W,i,j;
    int count=0;
    string  S[50];

    const int di[8]={-1,-1,-1,0,0,1,1,1};
    const int dj[8]={-1,0,1,-1,1,-1,0,1};
    int ki,kj;
    cin >> H >> W;

    for(i=0;i<H;i++){
        cin >> S[i];
    }

    for(i=0;i<H;++i){
        for(j=0;j<W;++j){
            if(S[i][j]=='#') continue;

            count=0;
            for(int d=0;d<8;++d){
                const int ki=i+di[d];
                const int kj=j+dj[d];

                if(ki<0 || ki>=H) continue;
                if(kj<0 || kj>=W) continue;
                if(S[ki][kj]=='#') count ++;
            }

            S[i][j]=char(count+'0');
        }
    }

    for(i=0;i<H;++i) cout << S[i] << endl;

}