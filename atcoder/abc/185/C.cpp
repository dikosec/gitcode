#include<bits/stdc++.h>
using namespace std;

// for loop
#define rep(i,a,n) for(uint64_t i=(a);i<(n);++i)
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
const ll MOD = 1000000007ll;
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

// setprecision
//cout << fixed << setprecision(n);

#define FOR(i, a, b) for(int i=(a); i<(b); ++i)
#define FORR(i, a, b) for(int i=(b)-1; i>=(a); --i)

constexpr uint64_t MAX=(ULONG_MAX-1);

uint64_t fact[MAX], fact_inv[MAX];

uint64_t power(uint64_t a, uint64_t b){
	uint64_t res=1;
	while(b>0){
		if(b&1) res=res*a%MOD;
		a=a*a%MOD;
		b>>=1;
	}
	return res;
}

uint64_t comb(uint64_t n, uint64_t r){
	return (fact[n]*fact_inv[r])%MOD*fact_inv[n-r]%MOD;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    uint64_t l; cin >> l;

    fact[0]=1;

    rep(i,0,l) fact[i+1]=fact[i]*(i+1)%MOD;

    fact_inv[l] = power(fact[l],MOD-2);

    FORR(i,0,l) fact_inv[i]=fact_inv[i+1]*(i+1)%MOD;

    uint64_t ans= comb(l-1,11);

    cout << ans ENDL;
    
    return 0;
}