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


bool isPrime(int n){
    int i;
    if(n<2) return 0;
    else if(n==2) return 1;
    if(n%2==0) return 0;
    for(i=3;i*i<=n;i+=2) if(n%i==0) return 0;
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    
    vector<ll> ans;
    bool flag=0;

    if(isPrime(n)){
        cout << 1 ENDL;
        cout << n ENDL;
        return 0;
    }
    else{
        flag=1;
        repe(i,1,sqrt(n)){
            if(n%i==0){
                ans.push_back(i);
                ans.push_back(n/i);
            }
        }
    }

    sort(all(ans));
    if(flag){
        repe(i,0,ans.size()-1){
            if(ans[i]-ans[i-1]==0) continue;
            cout << ans[i] ENDL;
        }
    }
    
    return 0;
}