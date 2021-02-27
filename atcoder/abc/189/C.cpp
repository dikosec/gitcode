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
    int n; cin >> n;
    vector<int> a(n);
    vector<ll> ra(n);

    ll sum = 0;
    //int mina = INF;
    rep(i,0,n){
        int A;
        cin >> A;
        //mina = min(mina,A);
        a[i] = A;
        sum += A;
        ra[i] = sum;
    }

    // rep(i,0,n){
    //     cout << ra[i] << " ";
    // }cout ENDL;

    int maxx = 0;
    for(int l=0;l<=n;l++){
        for(int r=l;r<n;r++){
            int diff = (r-l)-1;
            int sumrl =0;
            if(r==l){
                sumrl = ra[r];  
            }else sumrl = ra[r]-ra[l-1];
            
            int mina = INF;
            for(int i = l; i<=r; i++){
                mina = min(mina,a[i]);
            }

            //cout << "ra[r]: " << ra[r] ENDL;
            //cout << "sumrl: " << sumrl ENDL;
            //cout << "(l,r,x)=" << "(" << l << "," << r << "," << mina << ")" ENDL;
            //cout << "max: " << mina*(diff+2) ENDL;
            maxx = max(maxx,mina*(diff+2));
            //cout << "maxx: " << maxx ENDL;
        }
    }

    cout << maxx ENDL;


    
    
    return 0;
}