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
    vector<vector<int>> colli(n,vector<int> (2));
    double mx=0;
    for(int i=0;i<n;i++){
        double a,b;
        cin >> a >> b;
        mx=mx>a? mx:a;
        mx=mx>b? mx:b;
        colli.at(i).at(0)=a;
        colli.at(i).at(1)=b;
    }

    bool flag =0;
    for(int i=0;i<n;i++){
        double a = colli.at(i).at(0);
        double b = colli.at(i).at(1);
        for(int j=0;j<n;j++){
            if(i==j) continue;
            double kaku_x,kaku_y=0;
            kaku_x=a/colli.at(j).at(0);
            kaku_y=b/colli.at(j).at(1);
            
            for(int k=0;k<n;k++){
                if(/*i == j ||*/ j==k /*|| i==k*/) continue;
                if(a*kaku_x == colli.at(k).at(0)){
                    if(b*kaku_y == colli.at(k).at(1)){
                        flag=1;
                    }
                }
            }
        }
    }

    if(flag) cout << "Yes" ENDL;
    else cout << "No" ENDL;

    
    return 0;
}