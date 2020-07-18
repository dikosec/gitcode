/*
QUESTION    :A以上B以下の整数のうち、回文数となるものの個数を求めてください。ただし、回文数とは、先頭に0をつけない10進表記を文字列として見たとき、前から読んでも後ろから読んでも
             同じ文字列となるような正の整数のことを指します。

CONST       :10000<=A<=B<=99999
             input are all integer

INPUT       :A B

OUTPUT      :A以上B以下の整数のうち、回文数となるものの個数を出力せよ。

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B,i;
    int a,b,c,d;
    int count=0;

    cin >> A >> B;

    for(i=A;i<=B;i++){
        d=i%10;
        c=(i/10)%10;
        b=(i/1000)%10;
        a=(i/10000)%10;

        if((a==d)&&(b==c)){
            count++;
        }
    }

    cout << count << endl;
}