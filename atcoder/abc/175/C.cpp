#include<bits/stdc++.h>
using namespace std;

// for loop
#define rep(i,a,n) for(int i=(a);i<(n);++i)
#define repe(i,a,n) for(int i=(a);i<=(n);++i)
#define rrep(i,n,a) for(int i=(n);n>(a);--i)
#define rrepe(i,n,a) for(int i=(n);n>=(a);--i)

// abbreviati
#define PB(v) push_back(v)
#define MP make_pair
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define ENDL << "\n"

using ll = long long;
using P = pair<int,int>;
using itn = int;

// constant
const int INF = 1<<30;
const ll INFLL = 1LL << 60;
const ll MOD = 1000000007;
const long double PI =(acos(-1));

/***Snippet***************************************************
ifelse, isprime, torad, todeg, lcm, bfs,chmin,chmax
**************************************************************/

// adjacency list
vector<int> to[100005];

// Graph
using Graph = vector<vector<int>>;

// Grid
int H,W;
vector<vector<int>> field;

// 4方向への移動ベクトル
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x,k,d; cin >> x >> k >> d;
    x=abs(x);
    ll ans=0;
    // if(x/d>k){
    //     ans=x-d*k;
    // }else{
    //     ll e=x/d;
    //     k-=e;
    //     x-=e*d;
    //     if(k%2==1) x=abs(x-d);
    //     ans=x;
    // }

    if(x/d>k){
        ans=x-d*k;
    }else{
        ll m=x/d;
        ll r=k-m;
        x=x-m*d;
        if(r%2==1) x=abs(x-d);
        ans=x;
    }

    cout << ans ENDL;
    // rep(i,0,k){
    //     if(abs(x)<=d) break;
    //     if(x>0){
    //         x=x-d;
    //     }else{
    //         x=x+d;
    //     }
    //     //cout << "now:" << x ENDL;
    // }

    // if(abs(x)==d){
    //     cout << d ENDL;
    // }else if(x>0){
    //     ll temp=(ll)x/d;
    //     if(temp<=k){
    //         if(x%d==0){
    //             cout << 0 ENDL;
    //         }else{
    //             cout << x%d ENDL;
    //         }
    //         //cout << (x-(ll)(temp)*d) ENDL;
    //     }else{
    //         //cout << 
    //         cout << (x-(ll)d*k) ENDL;
    //     }
    // }else if(x<0){
    //     ll temp=(ll)x/d;
    //     if(temp<=k){
    //         if(x%d==0){
    //             cout << 0 ENDL;
    //         }else{
    //             cout << x%d ENDL;
    //         }
    //         //cout << 0-(x+(ll)(temp)*d) ENDL;
    //     }else{
    //         cout << 0-(x+(ll)(d*k)) ENDL;
    //     }
    // }else{
    //     cout << 0 ENDL;
    // }
    //cout << abs(x) ENDL;


    return 0;
}