#include<bits/stdc++.h>
using namespace std;

// for loop
#define rep(i,a,n) for(int i=(a);i<(n);++i)
#define repe(i,a,n) for(int i=(a);i<=(n);++i)
#define rrep(i,n,a) for(int i=(n);n>(a);--i)
#define rrepe(i,n,a) for(int i=(n);n>=(a);--i)

// abbreviati
#define PB(v) push_back(v)
#define MP make_pair
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
    int n,d;
    cin >> n >> d;
    vector<vector<int>> x(n,vector<int> (d));
    rep(i,0,n){
        rep(j,0,d){
            cin >> x[i][j];
        }
    }
    // rep(i,0,n){
    //     rep(j,0,d){
    //         cout << x.at(i).at(j) <<" ";
    //     }
    //     cout ENDL;
    // }

    double dist=0;
    int cnt=0;
    rep(i,0,n){
        rep(j,i+1,n){
            rep(k,0,d){
                //cout << "xid: " << x.at(i).at(k) << ":: xjd: " << x.at(j).at(k) ENDL;
                dist+=(x[i][k]-x[j][k])*(x[i][k]-x[j][k]);
                //cout <<"dist: "<< dist ENDL;
            }
            bool flag=0;
            repe(h,0,dist){
                if(h*h==dist) flag=1; 
            }
            if(flag) cnt++;
            // dist=sqrt(dist);
            // //cout <<"dist: "<< dist ENDL;

            // int dist2=dist;
            // //cout <<"dist2: "<< dist2 ENDL;
            // if(dist2%10==0) cnt++;
            dist=0.0;
        }
    }
    cout << cnt ENDL;
    return 0;
}