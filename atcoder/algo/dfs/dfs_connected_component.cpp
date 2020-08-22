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

//8方向への移動ベクトル 縦横斜め
const int dx[8]={-1,0,1,-1,1,-1,0,1};
const int dy[8]={-1,-1,-1,0,0,1,1,1};

void dfs(int h, int w){
    // 探索済みの島は海とすることで表す
    field[h][w]=0;

    for(int i=0;i<8;++i){
        int nh = h + dy[i];
        int nw = w + dx[i];

        // 範囲外かどうか
        if(nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
        
        // 海か
        if(field[nh][nw]==0) continue;
        
        // 再帰的に探索
        dfs(nh,nw);
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // INPUT
    while(cin >> W >> H){
        if(H==0 || W==0) break;

        // field のサイズと初期値を設定して初期化
        field.assign(H, vector<int> (W,0));
        // INPUT
        for(int i=0;i<H;++i)for(int j=0;j<W;++j){ cin >> field[i][j]; }
        
        // 島の個数
        int count=0;
        
        // 探索
        for(int i=0;i<H;++i){
            for(int j=0;j<W;++j){
                // 島を見つけたらその島に陸続きになっている島がなくなるまで探索
                // 全ての方向を探索したら島の数を+1して他に島があるか探索
                if(field[i][j]==0) continue;
                dfs(i,j);
                ++count;
            }
        }

        // OUTPUT
        cout << count ENDL;
    }
    
    return 0;
}