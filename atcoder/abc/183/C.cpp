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

int cnt=0;

int getres(int res,int n,int i,int j,vector<vector<int>> &T){

    if(j==n) return res;
    
    for(int k=j;k<n;k++){
        res+=T[i][k];
        return getres(res,n,j,k,T);
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k; cin >> n >> k;
    vector<vector<int>> T(n,vector<int> (n));

    rep(i,0,n)rep(j,0,n) cin >> T[i][j];

    int res=0;

    for(int i=1;i<n;i++){
        res=getres(res,n,0,i,T);

        if(res==k) cnt++;

        res=0;
    }

    cout << cnt ENDL;   
    
    return 0;
}