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
    int n,m;
    double t; cin >> n >> m >> t;
    int N=n;
    vector<double> time_ivent(2*m+2);
    time_ivent[0]=0;
    time_ivent[2*m+1]=t;

    rep(i,1,2*m+1){
        cin >> time_ivent[i];
    }

    bool flag =1;
    bool now =0;

    rep(i,0,2*m+1){
        //cout << "now: " << i ENDL;
        if(now==0){
            now=1;
            int tmp = (int)(time_ivent[i+1]-time_ivent[i]);
            //cout << "tmp:" << tmp ENDL;
            n-=tmp;
            //cout << "n:" << n ENDL;
            if(n<=0){
                flag=0;
            }
        }else{
            now=0;
            int tmp = (int)(time_ivent[i+1]-time_ivent[i]);
            //cout << "tmp:" << tmp ENDL;
            n+=tmp;
            //cout << "n:" << n ENDL;
            if(n>=N){
                n=N;
            }
        }
    }

    if(flag) cout << "Yes" ENDL;
    else cout << "No" ENDL;
    
    return 0;
}