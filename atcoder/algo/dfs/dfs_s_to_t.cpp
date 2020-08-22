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

//adjacency list
vector<int> to[100005];

//　Graph
using Graph = vector<vector<int>>;

//　dfs
//　その頂点がチェック済みかどうかを表す配列
vector<bool> seen;

void dfs(const Graph &G, int v){
    //　vを訪問済みにする
    seen[v]=1;

    //　vからいける各頂点 next_vについて
    for(auto next_v : G[v]){
        //next_vが訪問済みか
        if(seen[next_v]) continue; //　訪問済みならスルー
        dfs(G,next_v);  // 再帰的に探索
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // N:頂点数　M:辺数　s:始点　t:終点
    int N,M,s,t; cin >> N >> M >> s >> t;

    // 頂点N個のグラフ
    Graph G(N);
    
    // 読み込み
    rep(i,0,M){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    // 全頂点を0で初期化
    seen.assign(N,0);
    // 頂点sを始点として探索開始
    dfs(G,s);

    // tにたどり着けたか
    if(seen[t]) cout << "Yes" ENDL;
    else cout << "No" ENDL;

    
    return 0;
}