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
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i,0,n){
        cin >> d.at(i);
    }
    int count=1;
    int nax=0;
    int cur=0;
    sort(d.begin(),d.end());
    reverse(d.begin(),d.end());
    nax=d.at(0);
    rep(i,1,n){
        if(d.at(i)<nax){
            count++;
            nax=d.at(i);
        }
    }

    cout << count << endl;
    return 0;
}