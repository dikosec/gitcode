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
    int n;cin >>n;
    if(400<=n && n<=599) cout << 8 ENDL;
    else if(600<=n && n<=799) cout << 7 ENDL;
    else if(800<=n && n<=999) cout << 6 ENDL;
    else if(1000<=n && n<=1199) cout << 5 ENDL;
    else if(1200<=n && n<=1399) cout << 4 ENDL;
    else if(1400<=n && n<=1599) cout << 3 ENDL;
    else if(1600<=n && n<=1799) cout << 2 ENDL;
    else if(1800<=n && n<=1999) cout << 1 ENDL;
    
    return 0;
}