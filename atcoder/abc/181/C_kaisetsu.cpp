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
    vector<pair<int,int>> p(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        p.at(i)=make_pair(a,b);
    }

    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            for(int k=j+1;k<n;++k){
                int A=(p.at(j).second-p.at(i).second);
                int B=(p.at(j).first-p.at(i).first);
                int C=(p.at(k).second-p.at(i).second);
                int D=(p.at(k).first-p.at(i).first);

                if(A*D == B*C){
                    cout << "Yes" ENDL;
                    return 0;
                }
            }
        }
    }

    cout << "No" ENDL;
    
    return 0;
}