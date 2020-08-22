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

//　隣接頂点の色を保持
vector<int> color;

bool dfs(const Graph &G, int v, int cur=0){
    color[v]=cur;
    for(auto next_v : G[v]){
        // 隣接頂点の色が確定している場合
        if(color[next_v]!=-1){
            // 隣接頂点の色が同じならその時点で終了
            if(color[next_v]==cur) return 0;
            continue;
        }

        // 隣接頂点が違う色の間繰り返す
        // 一回でもfalseが返ってきたら終了
        if(!dfs(G,next_v,1-cur)) return 0;
    }

    //　falseになる条件を一回も満たさずに全頂点を調べ終えれたならそれは二部グラフである
    return 1;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // 頂点数: N, 辺数: M
    int N,M; cin >> N >> M;

    // INPUT 
    Graph G(N);
    for(int i=0;i<N;++i){
        int a,b;
        cin >> a >> b;
        G[a].PB(b);
        G[b].PB(a);
    }

    // Search
    color.assign(N,-1);
    bool is_bipartite=1;
    for(int v=0;v<N;++v){
        if(color[v]!=-1) continue;
        if(!dfs(G,v)) is_bipartite=0;
    }

    if(is_bipartite) cout << "Yes" ENDL;
    else cout << "No" ENDL;
    
    return 0;
}