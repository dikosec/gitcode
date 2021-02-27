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


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    vector<ll> a(n+1);
    vector<ll> b(n);

    rep(i,0,n+1) cin >> a[i];
    rep(i,0,n) cin >> b[i];
    
    ll cnt =0;
    rep(i,0,n){
        if(a[i]>b[i]){
            cnt += b[i];
        }else{
            cnt += a[i];
            b[i]-=a[i];
            if(a[i+1]>b[i]){
                cnt += b[i];
                a[i+1]-=b[i];
            }else{
                cnt += a[i+1];
                a[i+1]=0;
                //b[i]-=a[i+1];
            }
        }
    }

    cout << cnt ENDL;
    return 0;
}