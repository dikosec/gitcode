// #pragma GCC target("avx2")
// #pragma GCC optimize("O3")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

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

//Degree <-> Radian
double toRad(double d){ double rad; rad=d*PI/180; return rad; }
double toDegree(double rad){ double d; d=rad*180/PI; return d; }
//The least common multiple : lcm
ll lcm(int a,int b){ return a*b/__gcd(a,b); }
//素数判定
bool isPrime(int n){
    int i; 
    if(n<2) return 0;
    else if(n==2) return 1;
    if(n%2==0) return 0;
    for(i=3;i*i<=n;i+=2) if(n%i==0) return 0;
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> A(3,vector<int> (3));
    rep(i,0,3){
        rep(j,0,3){
            cin >> A.at(i).at(j);
        }
    }
    int n;
    cin >> n;
    vector<int> b(n);
    rep(i,0,n){
        cin >> b.at(i);
    }
    vector<vector<bool>> a(3,vector<bool>(3));
    rep(k,0,n){
        rep(i,0,3){
            rep(j,0,3){
                if(A.at(i).at(j)==b.at(k)){
                    a.at(i).at(j)=1;
                    //cout << "called" ENDL;
                }
            }
        }
    }
    
    // rep(i,0,3){
    //     rep(j,0,3){
    //         cout << a.at(i).at(j);
    //     }cout ENDL;
    // }

    bool flag=0;
    //横
    rep(i,0,3){
        if(a.at(i).at(0) && a.at(i).at(1) && a.at(i).at(2)) flag=1;
    }
    //縦
    rep(j,0,3){
        if(a.at(0).at(j) && a.at(1).at(j) && a.at(2).at(j)) flag=1;
    }
    //斜め
    if(a.at(0).at(0) && a.at(1).at(1) && a.at(2).at(2)) flag=1;
    if(a.at(0).at(2) && a.at(1).at(1) && a.at(2).at(0)) flag=1;

    if(flag) cout << "Yes" ENDL;
    else cout << "No" ENDL;

    return 0;
}