/*
STLのコンテナ
map
*/
/*
QUESTION    :N要素の配列A1,A2,...,ANが与えられます。個の配列の中の値のうち、出現回数が最も多い値とその出現回数を求めてください。
            　ただし、出現回数が最大になる値は複数存在しないものとします。
            　制約が大きいため計算量に注意してプログラムを作成してください。

CONST       :0<=N<=10^5
             0<=Ai<=10*9(1<=i<=N)
             出現回数が最大になるような値は複数存在しない

INPUT       :N
             A1 A2 ... AN

OUTPUT      :値　出現回数
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    map<int,int> A;
    cin >> N;

    //入力を受け取る
    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        //入力の値の出現回数を記録
        if(A.count(a)){
            A.at(a)+=1;
        }
        else{
            A[a]=1;
        }
    }

    //最多の出現回数の回数を保持
    int max_value=0;
    for(auto i : A){
        auto s=i.second;
        max_value=max(max_value,s);
    }

    //最多の出現回数のKeyの値を保持
    int max_key=0;
    for(auto i : A){
        auto k=i.first;
        auto v=i.second;
        if(v==max_value){
            max_key=k;
            continue;
        }
    }

    //最多の出現回数のKeyとValueの表示
    cout << max_key << " " << max_value << endl;


    
}
