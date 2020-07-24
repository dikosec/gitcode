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
    bool flag1=1,flag2=1;
    string s; cin >> s;
    int n=s.size();
    rep(i,0,n){
        if(i%2==0){
            if(s[i]=='R' || s[i]=='U' || s[i]=='D'){
                flag1=1;
            }else{
                flag1=0;
                break;
            }
        }else{
            if(s[i]=='L' || s[i]=='U' || s[i]=='D'){
                flag2=1;
            }else{
                flag2=0;
                break;
            }
        }
    }

    if(flag1&&flag2) cout << "Yes" ENDL;
    else cout << "No" ENDL;
    
    return 0;
}