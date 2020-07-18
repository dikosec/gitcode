/*
QUESTION    :1が書かれたカードがA枚、0が書かれたカードがB枚、-1が書かれたカードがC枚あります。
            　これらのコードから、ちょうどK枚を選んで取るとき、取ったカードに書かれた数の和として、ありうる値の最大値はいくつですか？

CONST       :Input are all integer.
             o<=A,B,C
             1<=K<=A+B+C<=2x10^9

INPUT       :A B C K

OUTPUT      :和としてありうる値の最大値を出力せよ。
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C,K;

    cin >> A >> B >> C >> K;

    int i;
    int result=0;
    int temp=K-A;
    if(temp>=0) result+=A;
    else        result+=K;
    
    if(temp>0)  temp-=B;
    if(temp>0)  result+=(-1)*temp;
    
    cout << result << endl;
}