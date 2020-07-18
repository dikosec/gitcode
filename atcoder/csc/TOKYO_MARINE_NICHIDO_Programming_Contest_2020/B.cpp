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
    long int A,B,V,W;
    int T;

    cin >> A >> V >> B >> W >> T;
    bool ans =0;
    if(A<B){
        A=A+V*T;
        B=B+W*T;
        if(A>=B){
            ans =1;
        }
    }else{
        A=A-V*T;
        B=B-W*T;
        if(A<=B){
            ans=1;
        }
    }

    if(ans){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    return 0;
}