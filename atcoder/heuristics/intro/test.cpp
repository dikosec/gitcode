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
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    vector<int> tes(26);

    rep(i,0,26){
        cin >> tes.at(i);
    }
    int cou=0;
    rep(i,1,26){
        cou+=tes.at(i);
    }

    cout << cou << endl;



    return 0;
}