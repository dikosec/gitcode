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
#define repeq(i,a,n) for(int i=a,i<=(n);++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    ll n;
    //番号Nを受け取る
    cin >> n;
    //答え用の空文字列を用意しておく
    string ans="";
    //N>0の間繰り返す
    while(n){
        n--;
        ans+=char('a'+(n%26));
        n/=26;
    }
    //逆順に
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}