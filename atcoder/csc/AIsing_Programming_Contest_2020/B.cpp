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
using ll = long long;
using P = pair<int,int>;
const long double PI =(acos(-1));

int main(){
    int N;
    int cnt=0;
    cin >> N;
    vector<int> a(N+1);
    rep(i,1,N+1){
        cin >> a.at(i);
    }
    rep(i,1,N+1){
        if(a.at(i)%2==1 && i%2==1){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}