#include<bits/stdc++.h>
using namespace std;

//for loop関係
#define rep(i,a,n) for(int i=(a);i<(n);++i)
#define repe(i,a,n) for(int i=(a);i<=(n);++i)
#define rrep(i,n,a) for(int i=(n);n>(a);--i)
#define rrepe(i,n,a) for(int i=(n);n>=(a);--i)

//略記
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define ENDL << "\n"

using ll = long long;
using P = pair<int,int>;
using itn = int;

//定数
const int INF = 1<<30;
const ll MOD = 1000000007;
const long double PI =(acos(-1));

/***スニペット***
ifelse, isprime, torad, todeg, lcm, bfs
****************/

//隣接リスト
vector<int> to[100005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n+1);
    vector<int> b(n);
    vector<int> c(n-1);
    rep(i,0,n) cin >> a.at(i);
    rep(i,0,n) cin >> b.at(i);
    rep(i,0,n-1) cin >> c.at(i);

    int sum=0;
    rep(i,0,n){
        sum+=b.at(a.at(i)-1);
        if(a.at(i+1)-a.at(i)==1) sum+=c.at(a.at(i)-1);
    }
    cout << sum ENDL;
    return 0;
}