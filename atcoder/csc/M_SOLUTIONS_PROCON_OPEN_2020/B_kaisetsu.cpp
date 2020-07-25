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
    int a,b,c,k;
    cin >> a >> b >> c >>k;
    int cnt=0;
    while(b<=a){ cnt++; b*=2;}
    while(c<=b){ cnt++; c*=2;}


    if(cnt<=k) cout << "Yes" ENDL;
    else cout << "No" ENDL;
    
    return 0;
}