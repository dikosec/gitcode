/*
QUESTION    :

RULE        :

INPUT       :

OUTPUT      :
*/

#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    char c;
    //入力受け取り
    cin >> c;
    //入力cは小文字か？
    if(islower(c)){
        //小文字なら'a'を出力
        cout << 'a' << endl;
    }   
    else{
        //大文字なら'A'を出力
        cout << 'A' << endl;
    }
    return 0;
}