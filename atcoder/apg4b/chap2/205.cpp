/*
再帰関数 recursive function

#ベースケース
再帰呼び出しを行わずに完了できる処理
#再帰ステップ
再息呼び出しを行い、その結果を用いて行う処理
ー＞再帰呼び出しの連鎖には終わりがあり、再帰ステップの再帰呼び出しを繰り返していくうちにベースケースに到達する
ー＞この条件を満たさないと無限ループになってしまう
#相互再帰
2つ以上の関数が相互に呼び合って再帰の形になっているもの
#
#
#

*/
/*
//報告書の伝達時間
#include<bits/stdc++.h>
using namespace std;

int complete_time(vector<vector<int>> &children,int x){
    //ベースケース
    if(children.at(x).size()==0){
        return 0;
    }

    //再帰ステップ
    int max_receive_time=0; //受け取った自国の最大値
    //x番の組織の子組織についてループ
    for(int c:children.at(x)){
        int receive_time = complete_time(children,c)+1;
        max_receive_time=max(max_receive_time,receive_time);
    }

    return max_receive_time;

}

int main(){
    int N;
    cin >> N;

    vector<int> p(N);
    p.at(0)=-1;
    for(int i=1;i<N;i++){
        cin >> p.at(i);
    }

    vector<vector<int>> children(N);

    for(int i=1;i<N;i++){
        int parent = p.at(i);
        children.at(parent).push_back(i);
    }

    cout << complete_time(children,0) << endl;
}
*/
//グリッド上の迷路の探索
/*
QUESTION    :NxNマスのマス目があります。上からi行目、左からj列目のマスを(i-1,j-1)と表すことにします。マス目を迷路に見立ててスタート地点から
             移動を始め、ゴールに到達することができるかを判定するプログラムを作成してください。スタートは(0,0)でゴールは(N-1,N-1)とします。
             マス目には2種類あり、それぞれのマス目はどちらかの種類です。
                壁マス：そのマスに移動することはできない。
                通路マス：そのマスに移動することができる。
             初めプレイヤーは(0,0)にいます。(0,0),(N-1,N-1)は必ず通路マスであるとします。
             プレイヤーは今いるマスの上下左右の4方向に隣り合うマスのうち、通路マスであるようなマスに移動することができます。斜めに移動したり、
             壁マスの中に移動したりすることはできません。また、NxNマスの範囲外へ移動することもできません。
             移動を繰り返すことでゴールマスである(N-1,N-1)に到達することができるならYesを、そうでないならNoを出力するプログラムを作成してください。
             各マスがどちらの種類であるかは文字列の配列として入力され、.は通路マスを表し、#は壁マスを表すとします。一行目に迷路の大きさNが入力され
             、二行目以降に迷路のマス目が入力されます。

INPUT       :3
             .##
             ...
             ##.
        
OUTPUTE     :Yes/No
*/
#include<bits/stdc++.h>
using namespace std;

bool is_valid_move(vector<string> &board,vector<vector<bool>> &checked,int x,int y){
    int N=board.size();

    //移動先がマス目以外の時
    if(x<=-1 || x>=N || y<=-1 || y>=N){
        return false;
    }
    //移動先が壁マス
    if(board.at(y).at(x)=='#'){
        return false;
    }
    //既に調べているマス
    if(checked.at(y).at(x)){
        return false;
    }

    //それ以外なら正しい移動
    return true;
}

bool reachable(vector<string> &board, vector<vector<bool>> &checked, int x,int y){
    int N=board.size();

    //ベースケース
    if(x==N-1 && y==N-1){
        //ゴールにいる状態
        return true;
    }

    //再帰ステップ
    checked.at(y).at(x)=true;

    bool result=false;

    //上へ移動できるか
    if(is_valid_move(board,checked,x,y-1) && reachable(board,checked,x,y-1)){
        result=true;
    }
    //右へ移動できるか
    if(is_valid_move(board,checked,x+1,y) && reachable(board,checked,x+1,y)){
        result=true;
    }
    //下へ移動できるか
    if(is_valid_move(board,checked,x,y+1) && reachable(board,checked,x,y+1)){
        result=true;
    }
    //左は移動できるか
    if(is_valid_move(board,checked,x-1,y) && reachable(board,checked,x-1,y)){
        result=true;
    }

    return result;

}

int main(){
    int N;
    cin >> N;

    //マス目の状態を受け取る
    vector<string> board(N);
    for(int i=0;i<N;i++){
        cin >> board.at(i);
    }

    //既にそのマスを調べたかを保持する二次元配列
    vector<vector<bool>> checked(N,vector<bool>(N,false));  //falseで初期化しておく


    //(0,0)からゴールまで到達できるか
    if(reachable(board,checked,0,0)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

}