#include<bits/stdc++.h>
using namespace std;

// for loop
#define rep(i,a,n) for(int i=(a);i<(n);++i)
#define repe(i,a,n) for(int i=(a);i<=(n);++i)
#define rrep(i,n,a) for(int i=(n);n>(a);--i)
#define rrepe(i,n,a) for(int i=(n);n>=(a);--i)

// abbreviati
#define PB(v) push_back(v)
#define MP(A,B) make_pair(A,B)
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
    int n,m; cin >> n >> m;
    vector<bool> a(n+1,true);
    rep(i,0,m){
        int b; cin >> b;
        a[b]=false;
    }


    vector<ll> dp(n+1);
    // dp[0]=1;
    // rep(now,0,n){
    //     rep(next,now+1,min(n,now+2)){
    //         if(a[next]){
    //             dp[next]+=dp[now];
    //             dp[next]%=MOD;
    //         }
    //     }
    // }

    dp[0]=1;
    dp[1]=1;
    rep(i,2,n+1){
        if(a[i-1]){
            dp[i]+=dp[i-1];
        }
        if(a[i-2]){
            dp[i]+=dp[i-2];
        }
        dp[i]%=MOD;
    }



    cout << dp[n] ENDL;
    return 0;
}