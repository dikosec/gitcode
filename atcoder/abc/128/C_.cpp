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
    int n,m; cin >> n >> m;
    vector<vector<int>> vec(m);

    for(int i=0;i<m;i++){
        int k;cin >> k;
        vec[i].resize(k);
        for(int j=0;j<k;j++){
            cin >> vec[i][j];
            --vec[i][j];
        }
    }
    
    vector<int> p(m);
    for(int i=0;i<m;++i) cin >> p[i];

    int ans=0;
    for(int i=0;i<(1<<n);i++){
        bool ok=1;
        for(int j=0;j<m;j++){
            int c =0;
            for( int id : vec[j]){
                if((i>>id) & 1){
                    ++c;
                }
            }
            c%=2;
            if(c!=p[j]){
                ok=0;
            }
        }
        if(ok){
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}