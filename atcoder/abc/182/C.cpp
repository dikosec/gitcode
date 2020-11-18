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

int ctoi(char a){
    return int(a)-48;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n; cin >> n;

    int ans = INF;
    bool flag = false;
    
    // 最大桁数 ちょい多め
    const int N=19;
    
    // 入力の桁数
    int len=n.size();

    // bit全探索
    for(ll tmp=0;tmp<(1<<len);tmp++){
        bitset<N> var(tmp);
        // bitを建てる桁数
        int d=var.count();
        // 消す桁数
        int a=len-d;
        // 復元した値
        ll dec=0;
        
        // j: 10^0,10^1,10^2,...,10^len
        int j=0;

        // i: n[len-1],n[len-1-1],n[len-1-2],...,n[0];
        for(int i=len-1;i>=0;i--){
            if(var.test(i)){
                dec+=ctoi(n[i])*pow(10,j);
                j++;
            }
        }

        if(dec%3==0 && dec!=0 && dec%10!=0){ 
            ans=min(ans,a);
            flag = true;
        }
    }
    
    if(flag) cout << ans ENDL;
    else cout << -1 ENDL;

    return 0;
}