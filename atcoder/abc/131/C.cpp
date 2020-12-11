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

ll lcm(int a,int b){ return a*b/ __gcd(a,b);}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    
    // bをcで割った数
    ll B_div_C = b/c;
    // bをdで割った数
    ll B_div_D = b/d;
    // b から上二つを引いたもの
    ll B_CD = b - (B_div_C + B_div_D);
    // cd の最小公倍数
    ll L_CD = lcm(c,d);
    // lcm(c,d)が重複して引かれているから足し戻す
    ll BL_CD = b/L_CD;
    B_CD += BL_CD;

    // (a-1)をcで割った数
    ll A_div_C = (a-1)/c;
    // (a-1)をdで割った数
    ll A_div_D = (a-1)/d;
    // 
    ll A_CD = (a-1) - (A_div_C + A_div_D);
    ll AL_CD = (a-1)/L_CD;
    A_CD += AL_CD;

    ll ans = B_CD - A_CD;

    ll tmp0 = b/c;
    ll tmp1 = a/c;
    ll tmp2 = tmp0 - tmp1;
    ll tmp3 = b/d;
    ll tmp4 = a/d;
    ll tmp5 = tmp3 - tmp4;
    ll tmp6 = lcm(c,d);
    ll tmp7 = b/tmp6;
    ll tmp8 = a/tmp6;
    ll tmp9 = tmp7 - tmp8;
    //ll ans = (tmp2+tmp5-tmp9);
    cout << ans << endl;


    return 0;
}