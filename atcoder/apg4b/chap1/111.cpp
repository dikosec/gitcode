/*
CONST   :0<=N<=7
         0<=A,Bi<=10
         A,Bi,N are integer
         opi is one of +,-,*,/

INPUT   :N
         A
         op1 B1
         op2 B2
         :  :
         :  :
         opN BN
OUTPUT  :1:1個目の計算結果
         2:2個目の計算結果
         :
         :
         N:N個目の計算結果

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,A,i;
    string op;
    int B;


    cin >> N >> A;

    for(i=0;i<N;i++){
        cin >> op >> B;
        
        if(op == "+"){
            A+=B;
        }
        else if(op == "-"){
            A-=B;
        }
        else if(op == "*"){
            A*=B;
        }
        else if(op == "/" && B!=0){
            A/=B;
        }
        else{
            cout << "error" << endl;
            break;
        }
        cout << i+1 << ":" << A << endl;
    }
}