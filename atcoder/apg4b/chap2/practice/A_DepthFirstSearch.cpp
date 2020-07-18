/*
QUESTION    :高橋君の住む街は長方形の形をしており、格子状の区画に区切られています。長方形の各辺は東西及び南北に並行です。各区画は道または塀の
             どちらかであり、高橋君は道を東西南北に移動できますが斜めには移動できません。また、塀の区画は通ることができません。
             高橋君が、塀を壊したりすることなく道を通って魚屋にたどり着けるかどうか判定してください。

CONST       :

INPUT       :H W
             c00 c01 c0W-1
             c10 c11 c1W-1
             .
             .
             cH-10 cH-11 cH-1W-1

OUTPUT      :
*/
/*
#include<bits/stdc++.h>
using namespace std;

void print_out(vector<vector<char>> &board,vector<vector<bool>> &checked){
    int H=board.size()-1;
    int W=board.at(0).size()-1;

    for(int i=0;i<=H;i++){
        for(int j=0;j<=W;j++){
            cout << board.at(i).at(j);
            if(j<W-1){
                
            }
            else{
                cout << endl;
            }
        }
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cout << checked.at(i).at(j);
            if(j<W-1){
                
            }
            else{
                cout << endl;
            }
        }
    }
}
bool is_valid_move(vector<vector<char>> &board,vector<vector<bool>> &checked,int i,int j){
    //進む先が範囲内か
    int H=board.size()-1;
    int W=board.at(0).size()-1;

    if(i<0 || i>=H || j<0 || j>=W){
        return false;
    }
    //進む先は既に調べたか
    if(checked.at(i-1).at(j-1)){
        return false;
    }
    //進む先は塀か
    if(board.at(i).at(j)=='#'){
        return false;
    }

    return true;
}

bool reachable(vector<vector<char>> &board,vector<vector<bool>> &checked,int i,int j,int gi,int gj){
    //ベースケース
    if(i==gi && j==gj){
        return true;
    }

    //再帰ステップ
    //このステップを既に調べたことをCHECK
    checked.at(i-1).at(j-1)=true;

    bool result=false;


    //上へ進めるか
    if(reachable(board,checked,i-1,j,gi,gj) && is_valid_move(board,checked,i-1,j)){
        result=true;
    }
    /*
    //下へ進めるか
    if(reachable(board,checked,i+1,j,gi,gj) && is_valid_move(board,checked,i+1,j)){
        result=true;
    }
    
    /*
    //右へ進めるか
    if(reachable(board,checked,i,j+1,gi,gj) && is_valid_move(board,checked,i,j+1)){
        result=true;
    }
    //左へ進めるか
    if(reachable(board,checked,i,j-1,gi,gj) && is_valid_move(board,checked,i,j-1)){
        result=true;
    }
    
    return result;
}


int main(){
    int H,W;
    cin >> H >> W;

    //家の位置
    int si=0,sj=0;
    //魚屋の位置
    int gi=0,gj=0;
    

    //入力の受け取り
    //HxW board
    vector<vector<char>> board(H+1,vector<char>(W+1,'#'));
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            cin >> board.at(i).at(j);
        }
    }

    //sとgの位置の探索
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            if(board.at(i).at(j)=='s'){
                si=i;
                sj=j;
            }
            if(board.at(i).at(j)=='g'){
                gi=i;
                gj=j;
            }
        }
    }
    //cout << si << "," << sj << "  " << gi << "," << gj << endl;
    
    //既に調べたかを保持する配列
    vector<vector<bool>> checked(H,vector<bool>(W,false));  //全てfalseで初期化

    //print_out(board,checked);

    //cout << reachable(board,checked,si,sj,gi,gj) << endl;

    cout << is_valid_move(board,checked,si,sj) << endl;
    //print_out(board,checked);

    
    //調べた結果sからgまで辿り着けるか
    if(reachable(board,checked,si,sj,gi,gj)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    
}
*/


#include<bits/stdc++.h>
using namespace std;

bool is_valid_move(vector<vector<char>> &board,vector<vector<bool>> &checked,int x,int y){
    //範囲内か
    int H=board.size();
    int W=board.at(0).size();
    if(x<0 || x>=H || y<0 || y>=W){
        return false;
    }

    //チェック済みか
    if(checked.at(x).at(y)==true){
        return false;
    }

    //塀か
    if(board.at(x).at(y)=='#'){
        return false;
    }

    //それ以外なら正しい移動
    return true;
}
bool search(vector<vector<char>> &board,vector<vector<bool>> &checked,int x,int y,int gi,int gj){
    //ベースケース
    //(x,y)が(gi,gj)に到達したらtrue
    if(x==gi && y==gj){
        return true;
    }
    //再帰ステップ
    //search済みにする
    checked.at(x).at(y)=true;

    bool result = false;
    //上に進めるか
    if(is_valid_move(board,checked,x-1,y) && search(board,checked,x-1,y,gi,gj)){
        result=true;
    }
    //右に進めるか
    if(is_valid_move(board,checked,x,y+1) && search(board,checked,x,y+1,gi,gj)){
        result=true;
    }
    //下に進めるか
    if(is_valid_move(board,checked,x+1,y) && search(board,checked,x+1,y,gi,gj)){
        result=true;
    }
    //左に進めるか
    if(is_valid_move(board,checked,x,y-1) && search(board,checked,x,y-1,gi,gj)){
        result=true;
    }

    return result;
}
int main(){
    int H,W;
    cin >> H >> W;

    //入力の受け取り
    vector<vector<char>> board(H,vector<char>(W,'#'));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin >> board.at(i).at(j);
        }
    }

    //スタートとゴールの位置
    int si,sj,gi,gj;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(board.at(i).at(j)=='s'){
                si=i;
                sj=j;
            }
            else if(board.at(i).at(j)=='g'){
                gi=i;
                gj=j;
            }
        }
    }

    //到達しているかのチェックボード    到達していたらtrue／していなかったらfalse
    vector<vector<bool>> checked(H,vector<bool>(W,false));

    //gまで到達できるならYes／到達できないならNo
    if(search(board,checked,si,sj,gi,gj)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }


}
