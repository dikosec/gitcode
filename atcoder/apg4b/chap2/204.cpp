/*
#参照    :変数に別名を付けることができる
         ある変数への参照を作った時、参照からその変数へとアクセスすることができる。

#参照の宣言 
参照先の型 &参照の名前 = 参照先;
宣言を行う時は参照先を指定して初期化する必要がある。

#関数の引数での参照
関数の引数を参照にすると、関数の中での参照の変更が呼び出し元の参照先にも適用される

#どんな時に使うか
関数の返り値を複数返したい場合  ー＞    関数の中で参照を変更すれば、呼び出し元の参照先も変更される　ー＞　関数の引数に複数の参照を渡せばよい
無駄なコピーを減らす    ー＞    関数へ引数を渡す際にコピーが発生するがその量と回数が膨大になると実行時間も必要メモリ量も膨大になる　－＞　参照渡しで解決できる

#範囲for文と参照
vector<int> a={1,2,3,4};
for(int &x:a){
    x=x*2;
}
こうするとa={2,4,6,8}となる

QUESTION    :小学校の先生であるあなたはA君に九九の表を埋める宿題を出しました。次の日、A君は宿題をやってきましたが、いくつかのマスは間違っているようです。
             A君の宿題を採点するプログラムを作成してください。
             具体的には、以下の要件を満たすプログラムを作成してください。
                A君の解答の表(9x9の二次元配列)を入力として受け取る
                誤った値が書き込まれたマスを正しい値に書き直す
                正しい値が書き込まれたマスの個数を数える
                誤った値が書き込まれたマスの個数を数える

CONST       :0<=Aij<=100

INPUT       :A11 A12 ... A19
             A21 A22 ... A29
             .
             .
             A91 A92 ... A99

OUTPUT      :A'11 A'12 ... A'19
             A'21 A'22 ... A'29
             .
             .
             A'91 A'92 ... A'99
             correct_count
             wrong_count

*/
#include<bits/stdc++.h>
using namespace std;

void saiten(vector<vector<int>> &A,int &correct_count,int &wrong_count){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(((i+1)*(j+1))==A.at(i).at(j)){
                correct_count++;
            }
            else{
                A.at(i).at(j)=(i+1)*(j+1);
                wrong_count++;
            }
        }
    }
}

int main(){
    vector<vector<int>> A(9,vector<int>(9));

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> A.at(i).at(j);
        }
    }

    int correct_count=0;    //正しい値のマスの個数
    int wrong_count=0;      //誤った値のマスの個数

    //A,correct_count,wrong_countを参照渡し
    saiten(A,correct_count,wrong_count);

    //正しく修正した表を出力
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout << A.at(i).at(j);
            if(j<8){
                cout << " ";
            }
            else{
                cout << endl;
            }
        }
    }

    //正しい値のマスの数を出力
    cout << correct_count << endl;
    //誤った値のマスの数を出力
    cout << wrong_count << endl;
}

