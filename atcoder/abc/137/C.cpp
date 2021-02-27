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

void get_array(string &s,vector<ll> &si){
    rep(i,0,10){
        si[(ll)s[i]] ++;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    vector<string> s(n);
    rep(i,0,n) cin >> s[i];

    bool flag=1;
    ll cnt=0;
    rep(i,0,n-1){
        flag = 1;
        vector<ll> si(26);
        get_array(s[i],si);
        vector<ll> sj(26);
        get_array(s[i+1],sj);
        rep(j,0,26){
            if(si[j]!=sj[j]){
                cout << "now: " << i << ", " << j ENDL;
                flag = 0;
            }
        }
        if(flag) cnt++;
    }

    cout << cnt ENDL;
    
    return 0;
}