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
vector<string> field;

// 4方向への移動ベクトル
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};

// 5x5への移動ベクトル
const int ddx[24]={-2,-2,-2,-2,-2,-1,-1,-1,-1,-1,0,0,0,0,1,1,1,1,1,2,2,2,2,2};
const int ddy[24]={-2,-1,0,1,2,-2,-1,0,1,2,-2,-1,1,2,-2,-1,0,1,2,-2,-1,0,1,2};

// Search
bool seen[1000][1000];
int w_cnt=0;

int nnh=0;
int nnw=0;

bool flag_GOAL=0;

bool warp(int h,int w){

    // 5x5にワープできる未探索の場所があるか
    rep(i,0,24){
        nnh=h+ddx[i];
        nnw=w+ddy[i];

        // gridの範囲内か
        if(nnh < 0 || nnh >= H || nnw <0 || nnw >= W) continue;

        //　移動先が未探索かどうか
        if(seen[nnh][nnw]) continue;

        // 移動先が道なら真
        if(field[nnh][nnw]=='.') return 1;
        else return 0;
    }
}

void dfs(int h, int w, int gh, int gw){
    seen[h][w]=1;

    // 4 direction
    rep(i,0,4){
        int nh=h+dx[i];
        int nw=w+dy[i];

        // gridの範囲内か
        if(nh < 0 || nh >= H || nw <0 || nw >= W) continue;
        
        
        
        // 移動先が壁かどうか
        if(field[nh][nw]=='#') continue;

        // if(field[nh][nw]=='#'){
        //     if(warp(h,w)){
        //         cout << "nh: " << nh << " ,nw: " << nw ENDL;
        //         w_cnt++;
        //         dfs(nnh,nnw,gh,gw);
        //         seen[nh][nw]=1;
        //         continue;
        //     }
        // }
        
        // 移動先が探索済みかどうか
        if(seen[nh][nw]) continue;

        // 移動先がゴールかどうか
        if(nh==gh && nw==gw){
            flag_GOAL=1;
            break;
        }
        
        dfs(nh,nw,gh,gw);
    }
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

    // seen
    memset(seen,0,sizeof(seen));

    // keiro

    

    // Search
    dfs(sh-1,sw-1,gh-1,gw-1);

    // Goal
    if(flag_GOAL) cout << w_cnt ENDL;
    else cout << -1 ENDL;
   
    return 0;
}