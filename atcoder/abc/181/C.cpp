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
    int n; cin >> n;
    vector<vector<bool>> grid(1010,vector<bool> (1010,0));
    
    int mx=0;
    for(int i=0;i<n;i++){
        int a,b=0;
        cin >> a >> b;
        mx=mx>a? mx:a;
        mx=mx>b? mx:b;
        grid.at(a).at(b)=1;
    }

    int cn =0;
    bool flag=0;
    for(int i=0;i<=mx+1;i++){
        for(int j=0;j<=mx+1;j++){
            if(grid.at(i).at(j)){
                cn=0;
                for(int k=j;k<=mx+1;k++){
                    if(grid.at(i).at(k)) cn++;
                }
                for(int k=j;k>=0;k--){
                    if(grid.at(i).at(k)) cn++;
                }
                if(cn>=3)flag=1;
                cn=0;
                for(int k=i;k<=mx+1;k++){
                    if(grid.at(k).at(j)) cn++;
                }
                for(int k=i;k>=0;k--){
                    if(grid.at(k).at(j)) cn++;
                    if(cn>=3)flag=1;
                }
            }
        }
    }
    
    if(flag) cout << "Yes" ENDL;
    else cout << "No" ENDL;

    cout << "mx=" << mx ENDL;

    return 0;
}