/*
QUESTION    :

RULE        :

INPUT       :

OUTPUT      :
*/
/*
    int     :10^9
long long   :10^19
*/
#include<bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<(n);++i)
#define repeq(i,a,n) for(int i=a;i<=(n);++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int h,w,k;
    cin >> h >> w >> k;

    //#の総数を保持
    int count=0;
    //i列目,i行目の#の数を保持
    int n=w+h+2;
    vector<int> a(n);

    //盤読み込み #の総数カウント
    vector<vector<char>> c(h+1,vector<char> (w+1));
    rep(i,0,h){
        rep(j,0,w){
            cin >> c.at(i).at(j); 
            if(c.at(i).at(j)=='#'){
                count++;
                a.at(i)++;
                a.at(h+1+j)++;
            }
        }
    }
    //配列aのチェック
    cout << "check:a" << endl;
    rep(i,0,n){
        cout << a.at(i) << endl;
    }

    //nビット全探索
    
    for(int tmp=0;tmp<(1<<(n));++tmp){
        bitset<14> s(tmp);
        int sum=0;
        for(int i=0;i<n;++i){
            if(s.test(i)){
                sum+=a.at(i);
            }
        }
        
    }
    return 0;
}