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

void bfs(int n){
    queue<int> q;
    vector<int> dist(n,-1);
    vector<int> pre(n,-1);

    dist[0]=0;
    q.push(0);

    while(!q.empty()){
        int v=q.front(); q.pop();
        for(int u : to[v]){
            if(dist[u]!=(-1))continue;
            dist[u]=dist[v]+1;
            pre[u]=v;
            q.push(u);
        }
    }
    /*
    rep(i,0,n){
        int ans=pre[i];
        cout << ans ENDL;
    }
    */
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // HxW grid
    cin >> H >> W;
    field.resize(H);

    // S,G
    int sh,sw,gh,gw;
    cin >> sh >> sw;
    cin >> gh >> gw;

    // Read 
    rep(i,0,H) cin >> field[i];


    
    return 0;
}