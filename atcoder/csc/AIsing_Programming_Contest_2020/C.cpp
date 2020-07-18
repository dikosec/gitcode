/*
QUESTION    :

RULE        :

INPUT       :

OUTPUT      :
*/
/*
    int     :10^9
long long   :10^19
*/
#include<bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<(n);++i)
#define repeq(i,a,n) for(int i=a;i<=(n);++i)
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const long double PI =(acos(-1));

ll f(ll n){
    ll ans=0;
    ll tmp=(sqrt(n));
    if(n<6){
        return ans;
    }
    else{
    for(ll i=1;i<=tmp;++i){
        if(i*i>n){
            break;
        }
        for(ll j=1;j<=(tmp/i);++j){
            if(j*j>n || i*j>n){
                break;
            }
            for(ll k=1;k<=((tmp/i)/j);++k){
                if(k*k>n || j*k>n || i*k>n){
                    break;
                }
                if(i*i+j*j+k*k+i*j+j*k+k*i==n){
                    ans++;
                }
            }
        }
    }
    return ans;
    }
}

int main(){
    int N;
    cin >> N;
    rep(i,1,N+1){
            cout << f(i) << endl;
    }
    return 0;
}