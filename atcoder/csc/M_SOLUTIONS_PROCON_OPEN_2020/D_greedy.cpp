#include<bits/stdc++.h>
using namespace std;

//for loop
#define rep(i,a,n) for(int i=(a);i<(n);++i)
#define repe(i,a,n) for(int i=(a);i<=(n);++i)
#define rrep(i,n,a) for(int i=(n);n>(a);--i)
#define rrepe(i,n,a) for(int i=(n);n>=(a);--i)

//abbreviati
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define ENDL << "\n"

using ll = long long;
using P = pair<int,int>;
using itn = int;

//constant
const int INF = 1<<30;
const ll MOD = 1000000007;
const long double PI =(acos(-1));

/***Snippet**************************************
ifelse, isprime, torad, todeg, lcm, bfs
************************************************/

//adjacency list
vector<int> to[100005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin >> n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];
    ll cub=0;
    ll money=1000;

    rep(i,0,n-1){
        cub=0;
        if(a[i]<a[i+1]){
            cub=money/a[i];
        }
        money+=cub*(a[i+1]-a[i]);

    }

    cout << money ENDL;
    
    return 0;
}