/*
QUESTION    :ある果物屋では、リンゴ。パイナップルがそれぞれN個売られています。i個目のリンゴ、パイナップルはそれぞれAi円、Pi円です。
             リンゴ、パイナップルをそれぞれ1つずつ選んで購入しようとするとき、合計金額がちょうどS円になるような買い方が何通りあるか求めてください。
             ただし、同じ値段の同じ種類の商品でも区別します。たとえば同じ値段のリンゴが複数あった場合、それらを買う場合は別の解方として数えます。
             パイナップルについても同様です。また、リンゴ、パイナップルを買う順番は考慮しないものとします。

CONST       :0<=N<=100
             0<=S<=1000
             1<=Ai,Pi<=500(1<=i<=N)
             Ai,Pi(1<=i<=N) are integer

INPUT       :N  S
             A1 A2 ... AN
             P1 P2 ... PN

OUTPUT      :リンゴ、パイナップルをそれぞれ1つずつ購入しようとするとき、合計金額がちょうどS円になるような買い方が何通りあるかを出力してください。
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,S;
    int i,j;
    int count=0;

    cin >> N >> S;

    vector<int> A(N,0);
    vector<int> P(N,0);

    for(i=0;i<N;i++){
        cin >> A.at(i);
    }
    for(i=0;i<N;i++){
        cin >> P.at(i);
    }

    //範囲for文
    for(int x : A){
        for(int y : P){
            if((x+y)==S){
                count++;
            }
        }
    }

    cout << count << endl;
}
