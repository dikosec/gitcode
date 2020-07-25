#include<bits/stdc++.h>
using namespace std;

//for loop
#define rep(i,a,n) for(int i=(a);i<(n);++i)
#define repe(i,a,n) for(int i=(a);i<=(n);++i)
#define rrep(i,n,a) for(int i=(n);n>(a);--i)
#define rrepe(i,n,a) for(int i=(n);n>=(a);--i)

//abbreviati
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define ENDL << "\n"

using ll = long long;
using P = pair<int,int>;
using itn = int;

//constant
const int INF = 1<<30;
const ll MOD = 1000000007;
const long double PI =(acos(-1));

/***Snippet**************************************
ifelse, isprime, torad, todeg, lcm, bfs
************************************************/

//adjacency list
vector<int> to[100005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k; 
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,0,n){
        ll b;
        cin >> b;
        a[i]=b;
    }
    for(int i=k;i<n;++i){
        if(a[i]>a[i-k]){
            cout << "Yes" ENDL;
        }else cout << "No" ENDL;
    }

    // //vector<int> tmp2(k);
    // long double tmp2=1;
    // for(int i=k-1;i>=0;--i){
    //     tmp2=(long double)tmp2*a[i];
    // }
    // //cout << tmp2 ENDL;
    // long double tmp=tmp2;
    // long double tmp1=1;
    // rep(i,k,n){
    //     //ll tmp1=1;
    //     if(i==k){
    //         tmp1=tmp2;
    //         tmp1=(long double)tmp1*a[i];
    //         tmp1=(long double)tmp1/a[i-k];
    //         //cout << tmp1 << " " << i ENDL;
    //         if(tmp1>tmp2){
    //             cout << "Yes" ENDL;
    //             tmp=tmp1;
    //         }else{
    //             cout << "No" ENDL;
    //             tmp=tmp1;
    //         }
    //     }else {
    //         //tmp1=1;
    //         tmp1=(long double)tmp1*a[i];
    //         tmp1=(long double)tmp1/a[i-k];
    //         //cout << tmp1 << " " << i ENDL;
    //         if(tmp1>tmp){
    //             cout << "Yes" ENDL;
    //             tmp=tmp1;
    //         }else{
    //             cout << "No" ENDL;
    //             tmp=tmp1;
    //         }
    //     }
    // }
    
    return 0;
}