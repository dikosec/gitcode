/*
QUESTION    :黒板にN個の正の整数A1,...,ANが書かれています。
             すぬけ君は、黒板に書かれている整数がすべて偶数であるとき、次の操作を行うことができます。
                黒板に書かれている整数すべてを、2で割ったものに置き換える。
             すぬけ君は最大で何回操作を行うことができるかをもとめてください。

CONST       :1<=N<=200
             1<=Ai<=10^9

INPUT       :N
             A1 A2 ... AN

OUTPUT      :すぬけ君は最大で何回操作を行うことができるかを出力せよ。

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,i;
    int A;
    int temp=0;
    int count=100;

    cin >> N;

    for(i=0;i<N;i++){
        cin >> A;
        temp=0;
        while(A%2==0){
            A/=2;
            temp++;
        }
        if(count>temp){
            count=temp;
        }
    }

    cout << count << endl;
}