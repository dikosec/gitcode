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
    // switch : n
    // light : m
    int n,m; cin >> n >> m;
    vector<vector<int>> s(m);
    // switch state : s
    //vector<vector<int>> s(m, vector<int> (n+1));
    // remain : p
    vector<int> p(m);

    for(int i=0;i<m;i++){
        int k;
        cin >> k;
        s[i].resize(k);
        for(int j=0;j<k;j++){
            cin >> s[i][j];
            --s[i][j];
        }
    }
    rep(i,0,m){
        cin >> p[i];
    }

    // constexpr int  N=10;
    // int cnt=0;
    // rep(i,0,m){
    //     for(int tmp=0;tmp<(1<<n);tmp++){
    //         bitset<N> bin(tmp);
    //         bool flag=1;
    //         repe(j,1,k[i]){
    //             if(!((bin >> (s[i][j])) &&1)){
    //                 flag=0;
    //             }
    //         }
    //         if(flag){
    //             cnt++;
    //         }
    //     }
    // }

    int ans=0;
    // bit全探索
    for(int i=0;i<(1<<n);++i){
        bool flag=1;

        for(int j=0;j<m;j++){
            int cnt=0;
            for(int id: s[j]){
                if((i>>id) & 1){
                    ++cnt;
                }
            }
            cnt %=2;
            if(cnt != p[i]){
                flag=0;
            }
        }
        if(flag){
            ++ans;
        }
    }

    cout << ans ENDL;
    
    return 0;
}