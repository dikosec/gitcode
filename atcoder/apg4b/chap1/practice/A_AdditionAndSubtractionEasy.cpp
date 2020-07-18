/*
QUESTION    :joisinoお姉ちゃんは、A op Bという式の値を計算したいと思っています。ここで、 A,Bは整数で、opは、'+'または'-'の記号です。あなたの仕事は、
             joisinoお姉ちゃんの代わりにこれらを求めるプルグラムを作ることです。

CONST       :1<=A,B<=10^9
             opは'+'または'-'の記号である。

INPUT       :A op B

OUTPUT      :式の値を出力せよ。
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    char op;

    cin >> A >> op >> B;

    if(op=='+'){
        cout << A+B << endl;
    }
    else if(op=='-'){
        cout << A-B << endl;
    }
    else{
        cout << "Error" << endl;
    }
}
