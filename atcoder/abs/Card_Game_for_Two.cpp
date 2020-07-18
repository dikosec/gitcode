/*
QUESTION    :N枚のカードがあります。i枚目のカードにはaiという数字が書かれています。
             AliceとBobは、これらのカードを使ってゲームを行います。ゲームでは、AliceとBobが1枚ずつカードを取っていきます。Aliceが先にカードを取ります。
             2人がすべてのカードを取ったときゲームは終了し、取ったカードの数の合計がその人の得点になります。2人とも自分の得点を最大化するように最適な戦略
             を取った時、AliceはBobより何点多く取るか求めてください。

RULE        :1<=N<=100 N is integer
             1<=ai(1<=i<=N)<=100 ai are integer

INPUT       :N
             a1 a2 a3 ... aN

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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,0,n){
        cin >> a.at(i);
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int ans=0;
    int tmp=2;
    rep(i,0,n){
        if(tmp%2==0){
            ans+=a.at(i);
            tmp++;
        }else{
            ans-=a.at(i);
            tmp++;
        }
    }
    cout << ans << endl;
    return 0;
}