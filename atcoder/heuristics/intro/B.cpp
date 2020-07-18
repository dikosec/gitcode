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
#define rep(i,a,n) for(int i=a;i<=(n);++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int get_satisfaction(int d,int t,vector<vector<ll>> &s,int total_c,vector<ll> &c){
    int ans=0;
    ans+=s.at(d).at(t);
    ans-=(total_c-c.at(t));

    return ans;
}

int main(){
    int D;
    cin >> D;

    ll total_c=0;
    vector<ll> c(27);
    for(int i=1;i<=26;++i){
        cin >> c.at(i);
        total_c+=c.at(i);
    }
    vector<vector<ll>> s(366,vector<ll> (27));

    for(int i=1;i<=D;++i){
        for(int j=1;j<=26;++j){
            cin >> s.at(i).at(j);
        }
    }

    ll satifaction=0;
    /*
    vector<ll> t(366);
    for(int i=1;i<=D;++i){
        cin >> t.at(i);
    }

    //cout << "ok" << endl;

    vector<ll> v(366);
    for(int i=1;i<=D;i++){
        v.at(i)=get_satisfaction(i,t.at(i),s,total_c,c);
    }

    for(int i=1;i<=D;i++){
        cout << v.at(i) << endl;
    }
    */
    return 0;
}