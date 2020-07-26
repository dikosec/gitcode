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
const ll INFL = 1LL << 60;
const ll MOD = 1000000007;
const long double PI =(acos(-1));

/***Snippet**************************************
ifelse, isprime, torad, todeg, lcm, bfs,chmin,chmax
************************************************/

//adjacency list
vector<int> to[100005];

template<class T>inline bool chmin(T &a,T b){ if(a>b){a=b; return 1;} return 0;}
template<class T>inline bool chmax(T &a,T b){ if(a<b){a=b; return 1;} return 0;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    vector<ll> h(100006);
    rep(i,0,n) cin >> h[i];
    vector<ll> dp(100006,INFL);
    //vector<ll> cost(1000006);
    // rep(i,1,n){
    //     if(i==1) cost[i]=abs(h[i]-h[i-1]);
    //     else if(cost[i-1]+abs(h[i]-h[i-1])>cost[i-2]+abs(h[i]-h[i-2])){
    //         cost[i]=cost[i-2]+abs(h[i]-h[i-2]);
    //     }else{
    //         cost[i]=cost[i-1]+abs(h[i]-h[i-1]);
    //     }
    // }
    dp[0]=0;
    rep(i,1,n){
        chmin(dp[i],dp[i-1]+abs(h[i]-h[i-1]));
        if(i>1){
            chmin(dp[i],dp[i-2]+abs(h[i]-h[i-2]));
        }
    }


    cout << dp[n-1] ENDL;



    
    return 0;
}