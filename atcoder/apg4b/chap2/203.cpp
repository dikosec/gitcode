/*
vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値))

変数名.at(i).at(j)  でi行j列目にアクセスできる
変数名.size()   で縦のサイズ
変数名.at(0).size() で横のサイズ

#arrayを用いた2次元配列
array<array<int,4>,3> data={};  縦3横4の2次元配列

#Cの配列を用いた2次元配列
int data[3][4] = {};    縦3横4の2次元配列

3次元配列  
vector<vector<vector<要素の型>>> 変数名(要素数1, vector<vector<要素の型>>(要素数2, vector<要素の型>(要素数3, 初期値)));

 Nx(3x3)要素の配列を宣言
vector<vector<vector<char>>> data(N,vector<vector<char>>(3,vector<char>(3)));

ゲーム大会
QUESTION    :あるゲーム大会にはN人が参加しM試合が行われました。各参加者には1からNの番号が割り当てられています。
             試合に関する情報が与えられるので、M回の試合がすべて終了した時点での試合結果の票を作成し、出力してください。
             ただし、同じ参加者のペアについて2回以上試合が行われることはないとします。

CONST       :1<=N<=100
             0<=M<=4950
             1<=Ai,Bi<=N(1<=i<=M)
             Ai!=Bi(1<=i<=M)
             同じ参加者のペアで2回以上試合が行われることはない
             入力はすべて整数

INPUT       :N  M
             A1 B1
             A2 B2
             .  .
             .  .
             AM BM

OUTPUT      :試合結果の表を出力してください。

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    int i,j;

    int a,b;
    cin >> N >> M;

    vector<vector<char>> result(N,vector<char>(N,'-'));
    vector<int> A(M);
    vector<int> B(M);
    
    for(i=0;i<M;i++){
        cin >> A.at(i) >> B.at(i);
    }

    for(i=0;i<M;i++){
        a=A.at(i)-1;
        b=B.at(i)-1;
        result.at(a).at(b)='o';
        result.at(b).at(a)='x';
    }
    
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            cout << result.at(i).at(j);
            if(j<N-1){
                cout << " ";
            }
        }
        cout << endl;
    }
}