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

using ll = uint64_t;
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
    ll l,r; cin >> l >> r;

    ll ans=INFLL;
    ll cnt=0;
    for(ll i=l;i<=r;i++){
        for(ll j=i+1;j<=r;j++){
            if(i*j%2019==0){
                cout << 0 ENDL;
                return 0;
            }else
            {
                ans=min(ans,i*j%2019);
                cnt++;
            }
            if(cnt>=2019*2019){
                break;
            } 
        }
    }
    cout << ans ENDL;

    // ll min1=INFLL;
    // int now1=0;
    // ll min2=INFLL;
    // int now2=0;
    // int cnt=0;
    // for(int i=l;i<=r;i++){
    //     if(i % 2019 <min1){
    //         min1=i%2019;
    //         now1=i;
    //     }
    //     cnt ++;
    //     if(cnt>=2025) break;
    // }
    // cnt=0;
    // int dance=0;
    // for(int i=l;i<=r;i++){
    //     if(i==now1){
    //         dance++;
    //     }
    //     else if(i % 2019 <min2){
    //         //if(min2==min1) continue;
    //         min2=i%2019;
    //         now2=i;
    //     }
    //     cnt ++;
    //     if(cnt>=2025) break;
    // }    

    //cout << "i: " << now1 << " , j: " << now2 ENDL;
    //cout << (min1*min2) % 2019 ENDL;


    
    return 0;
}