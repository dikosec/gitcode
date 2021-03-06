/*
QUESTION    :square1001は、電光掲示板に整数1が表示されているのを見ました。彼は、電光掲示板に対して、以下の操作A、操作Bをすることができます。
             操作A:電光掲示板に表示する整数を「今の電光掲示板の整数を2倍にしたもの」に変える。
             操作B:電光掲示板に表示する整数を「今の電光掲示板の整数にKを足したもの」に変える。
             square1001は、操作A、操作B合計でN回行わなければなりません。そのとき、N回の操作後の、電光掲示板に書かれている整数として考えられる最小の値を求めなさい。

CONST       :1<=N,K<=10
             INPUT are all integer

INPUT       :N
             K

OUTPUT      :square1001がN回操作を行った後の、電光掲示板に書かれている整数として考えられる最小値を出力しなさい。

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,K,i;
    int result=1;

    cin >> N >> K;

    for(i=0;i<N;i++){
        if((2*result)<(result+K)){
            result*=2;
        }
        else{
            result+=K;
        }
    }
    cout << result << endl;
}