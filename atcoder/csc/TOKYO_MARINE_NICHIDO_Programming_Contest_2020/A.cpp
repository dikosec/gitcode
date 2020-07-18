/*
QUESTION    :

RULE        :

INPUT       :

OUTPUT      :
*/

#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main(){
    string S;
    cin >> S;
    string nickname;
    for(int i=0;i<3;i++){
        nickname+=S.at(i);
    }
    cout << nickname << endl;
    return 0;
}