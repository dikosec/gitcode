/*
2020/5/17
B

QUESTION    :

CONST       :

INPUT       :

OUTPUT      :
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    string S;

    cin >> N >> S;

    if(S.size()<=N){
        cout << S << endl;
    }
    else{
        for(int i=0;i<N;i++){
            cout << S.at(i);
        }
        cout << "..." << endl;
    }
}