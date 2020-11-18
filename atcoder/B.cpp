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
    vector<ll> a(4);
    rep(i,0,4) cin >> a[i];
    ll ans=-INFLL;
    // ans=(abs(a*c),min(abs(a*d),min(abs(b*c),abs(b*d))));
    // if(ans==abs(a*c)) {cout << a*c ENDL; return 0 }
    // if(ans==abs(a*d)) cout << a*d ENDL;
    // if(ans==abs(b*c)) cout << b*c ENDL;
    // if(ans==abs(b*d)) cout << b*d ENDL;

    rep(i,0,2){
        rep(j,2,4){
            if(ans<a[i]*a[j]) ans=a[i]*a[j];
            //ans=max(ans,a[i]*a[j]);
        }
    }
    
    cout << ans ENDL;
    
    return 0;
}