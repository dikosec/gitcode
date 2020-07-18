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
/*
int main(){
    int n,q;
    cin >> n;
    vector<int> a(n);
    rep(i,0,n){
        cin >> a.at(i);
    }
    
    cin >> q;
    vector<int> b(q);
    vector<int> c(q);
    vector<ll> s(q);
    int ans=0;

    rep(i,0,q){
        cin >> b.at(i) >> c.at(i);
    }

    int count=0;
    rep(i,0,q){
        ans=0;
        count=0;
        rep(j,0,n){
            if(a.at(j)==b.at(i)){

                a.at(j)=c.at(i);
            }
            ans+=a.at(j);
        }
        cout << ans << endl;
    }
    return 0;
}
*/
const int MX =100005;

int main(){
    int n;
    //Nの読み込み
    cin >> n;
    //それぞれの値が何個ずつ入っているかの配列
    vector<ll> cnt(MX);
    //aの入力を受けたらaの個数を+1していく
    rep(i,0,n){
        int a;
        cin >> a;
        cnt[a]++;
    }
    ll total=0;
    rep(i,0,MX){
        total+=i*cnt[i];
    }
    int q;
    cin >> q;
    rep(i,0,q){
        int b,c;
        cin >> b >> c;
        //合計を更新
        total-=b*cnt[b];
        total+=c*cnt[b];
        //カウントの配列を更新
        cnt[c]+=cnt[b];
        cnt[b]=0;   
        cout << total << endl;
    }
    return 0;
}

