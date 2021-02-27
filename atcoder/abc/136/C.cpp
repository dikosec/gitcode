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

// setprecision
//cout << fixed << setprecision(n);


bool move_check(int a,int b,int c){
    if(a<=b && b<=c) return 1;
    else return 0;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    vector<ll> h(n);

    rep(i,0,n) cin >> h[i];

    

    bool flag =1;
    rep(i,0,n-2){
        if(h[i]<h[i+1] && h[i+1]>h[i+2]){
            h[i+1]--;
            if(!move_check(h[i],h[i+1],h[i+2])){
                cout << "No" ENDL;
                //flag=0;
                return 0;
            }
        }else{
            if()
            if(!move_check(h[i],h[i+1],h[i+2])){
                cout << "No" ENDL;
                return 0;
                //flag=0;
            }
        }
        //cout << "now:" << h[i] ENDL;
    }
    
    if(flag) cout << "Yes" ENDL;
    else cout << "No" ENDL;
    return 0;
}