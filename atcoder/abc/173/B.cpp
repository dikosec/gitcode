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

int main(){
    int n;
    cin >> n;
    string s;
    vector<int> c(4);
    rep(i,0,n){
        cin >> s;
        if(s=="AC"){
            c.at(0)++;
        }
        if(s=="WA"){
            c.at(1)++;
        }
        if(s=="TLE"){
            c.at(2)++;
        }
        if(s=="RE"){
            c.at(3)++;
        }
    }
    cout << "AC x " << c.at(0) << endl;
    cout << "WA x " << c.at(1) << endl;
    cout << "TLE x " << c.at(2) << endl;
    cout << "RE x " << c.at(3) << endl;

    return 0;
}