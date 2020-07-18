/*
範囲for文   :配列の要素に対する処理を簡潔に書くことができる
             コンテナと呼ばれるデータ型に対して使うことができる。
             文字列型もコンテナの一種

vector<int> a={1,3,2,5};
for(int x : a){

}
配列変数aから要素を1つに取り出してXという変数にコピーして動作します。

配列の全ての要素に対する処理を行う場合ー＞範囲for文
それ以外で一定回数繰り返し処理する場合ー＞for文
それ以外                            ー＞while文 ー＞具体的に何回処理を繰り返せばいいか決まっていないときに適している

隣り合う同じ値を探す
QUESTION    :5つの要素からなる配列が与えられます。同じ値の要素が隣り合っているような箇所が存在するかどうかを判定してください。
             存在するなら"YES"を、存在しなければ"NO"を出力してください。

CONST       :0<=Ai<=100(1<=i<=5)
             Ai(1<=i<=5) are integer

INPUT       :A1 A2 A3 A4 A5

OUTPUT      :YES/NO
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    vector<int> A(5,0);

    for(i=0;i<5;i++){
        cin >> A.at(i);
    }

    int ans=0;

    for(i=0;i<4;i++){
        if(A.at(i)==A.at(i+1)){
            ans=true;
        }
    }

    if(ans){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}