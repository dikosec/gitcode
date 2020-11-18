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
const ll INFLL = 1LL << 60;
const ll MOD = 1000000007;
const long double PI =(acos(-1));

/***Snippet***************************************************
ifelse, isprime, torad, todeg, lcm, bfs,chmin,chmax
**************************************************************/
template<class T>inline bool chmin(T &a,T b){ if(a>b){a=b; return 1;} return 0;}

//adjacency list
vector<int> to[100005];



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k; cin >> n >> k;
    vector<ll> h(1000006);
    rep(i,0,n) cin >> h[i];

    vector<ll> dp(1000006,INFLL);
    dp[0]=0;
    rep(i,1,n){
        chmin(dp[i],dp[i-1]+abs(h[i]-h[i-1]));
        rep(j,1,k){
            chmin(dp[i],dp[i-j]+abs(h[i]-h[i-j]));
        }
    }
    cout << dp[n-1] ENDL;
    return 0;


    
    return 0;
}