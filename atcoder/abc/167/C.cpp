#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M,X;
    int i,j;


    cin >> N >> M >> X;

    vector<int> C(N,0);
    vector<vector<int>> A(N,vector<int>(M));
    int money=0;

    for(i=0;i<N;i++){
        cin >> C.at(i);
        for(j=0;j<M;j++)
        cin >> A.at(i).at(j);
    }

    

}