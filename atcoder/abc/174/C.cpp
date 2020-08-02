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
const ll INFLL = 1LL << 60;
const ll MOD = 1000000007;
const long double PI =(acos(-1));

/***Snippet***************************************************
ifelse, isprime, torad, todeg, lcm, bfs,chmin,chmax
**************************************************************/

bool isPrime(int n){
    int i;
    if(n<2) return 0;
    else if(n==2) return 1;
    if(n%2==0) return 0;
    for(i=3;i*i<=n;i+=2) if(n%i==0) return 0;
    return 1;
}

//adjacency list
vector<int> to[100005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll k; cin >> k;
    int flag=0;
    ll cnt=0;
    ll s=7;
    // rep(i,0,t){
    //     s=s*10+7;
    //     cnt++;
    // }
    if(k%2==0 || k%5==0) flag=0;
    else{
        int n=1;
        while(n){
            //cout << s ENDL;
            if(s%k==0){
                flag=1; 
                n=0;
                cnt++;
            }else{
                s=s*10+7;
                cnt++;
            } 
        }
         
    }
    if(flag) cout << cnt ENDL;
    else cout << -1 ENDL;
    
    return 0;
}