/*
QUESTION    :整数Xを十進法で表した時の各桁の数字の和をf(X)としたとき、Xがf(X)で割り切れる場合、Xはハーシャッド数です。
             整数Nが与えられるので、ハーシャッド数かどうか判定してください。

CONSt       :1<=N<=10^8
             input are all integer

INPUT       :N

OUTPUT      :Yes/No

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,i;
    int fx=0;
    int n;

    cin >> N;
    n=N;
    for(i=0;i<100000000;i++){
        fx+=(N%10);
        N/=10;
        if(N<0){
            break;
        }
    }

    if(n%fx==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}