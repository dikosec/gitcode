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
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    rep(i,0,n) cin >> a(n);
    rep(i,0,m) cin >> b(m);

    ll t=0;
    rep(i,0,m) t+=b[i];

    //bをm冊読むと仮定する
    int j=m;
    int ans=0;
    //尺取り法
    rep(i,0,n+1){
        //読む本の合計時間がkを超えている　かつ　bの本がまだある
        while(t>k && j>0){
            --j;        //読む本を一冊減らす
            t-=b[j];    //読む本の合計も一冊分減らす
        }               //読む本の合計がkより小さくなるか、bの本が無くなるとwhile文を抜ける
        if(t>k) break;      //bの本が無くない　かつ　読む本の合計がkを超えている　ならbreak
        ans=max(ans,i+j);   //aを読む冊数i,bを読む冊数jの合計の最大をansとする
        if(i==n) break;     //aをn冊より多く読むことはできないのでbreak
        t+=a[i];            //aを読む冊数を1増やして考える
    }
    cout << ans << endl;
    return 0;
}