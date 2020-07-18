/*
CONST   :1<=N<=100
         0<=A<=N^2

INPUT   :N
         A
OUTPUT  :黒色に塗ることになるマスの個数
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,A;

    cin >> N >> A;

    cout << N*N-A << endl;
}