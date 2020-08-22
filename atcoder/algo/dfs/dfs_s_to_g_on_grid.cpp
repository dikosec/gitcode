#include<bits/stdc++.h>
using namespace std;

// for loop
#define rep(i,a,n) for(int i=(a);i<(n);++i)
#define repe(i,a,n) for(int i=(a);i<=(n);++i)
#define rrep(i,n,a) for(int i=(n);n>(a);--i)
#define rrepe(i,n,a) for(int i=(n);n>=(a);--i)

// abbreviati
#define PB push_back
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
vector<string> field;

//4方向への移動ベクトル
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};

// Search
bool seen[510][510];

void dfs(int h, int w){
    seen[h][w]=true;

    // 4方向へ探索
    for(int i=0;i<4;++i){
        int nh = h + dx[i];
        int nw = w + dy[i];

        // gridの範囲内かどうか
        if(nh < 0 || H <= nh || nw < 0 || W <= nw ) continue;

        // 移動先が壁かどうか
        if(field[nh][nw]=='#') continue;

        // 移動先が探索済みかどうか
        if(seen[nh][nw]) continue;

        // 再帰的に探索
        dfs(nh,nw);
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // HxW grid
    cin >> H >> W;
    field.resize(H);
    for(int i=0;i<H;++i) cin >> field[i];

    // verify START and GOAL
    int sh,sw,gh,gw;
    for(int i=0;i<H;++i){
        for(int j=0;j<W;++j){
            if(field[i][j]=='s'){ sh=i; sw=j; }
            if(field[i][j]=='g'){ gh=i; gw=j; }
        }
    }

    // cout << sh << sw ENDL;
    // cout << gh << gw ENDL;

    // seenを0で初期化
    memset(seen, 0, sizeof(seen));
    // START を指定してSearch
    dfs(sh,sw);

    // for(int i=0;i<H;++i){
    //     for(int j=0;j<W;++j){
    //         cout << seen[i][j];
    //     }
    //     cout ENDL;
    // }

    // GOALまでの経路があるか
    if(seen[gh][gw]) cout << "Yes" ENDL;
    else cout << "No" ENDL;
    
    return 0;
}