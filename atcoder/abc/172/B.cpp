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
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    string s,t;

    cin >> s >> t;
    int count=0;

    for(int i=0;i<s.size();i++){
        if(s.at(i)!=t.at(i)){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}