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
    int a,b,c,d; cin >> a >> b >> c >> d;

    int ans=0;
    rep(i,0,4){
        if(i==0) ans=a+b;
        if(i==1) ans=a-b;
        if(i==2) ans=a*b;
        if(i==3) ans=a/b;
        rep(j,0,4){
            if(j==0) ans=ans+c;
            if(j==1) ans=ans-c;
            if(j==2){
                if(i==0){
                    ans=a+(b*c);
                }
                if(i==1){
                    ans=a-(b*c);
                }
            }
            if(j==3){
                if(i==0){
                    ans=a+(b/c);
                }
                if(i==1){
                    ans=a-(b/c);
                }
            }
            rep(k,0,4){
                if(k==0){
                    
                }
            }
        }
    }
    
    return 0;
}