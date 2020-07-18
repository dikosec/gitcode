/*
CONST   :1<=N<=100
         Is Si p, w, G or Y ?
         There are always i,j,k. that satisfy Si='p', Sj='w' and Sk='G'

INPUT   :N
         S1 S2 ... SN
OUTPUT  :when 3 kinds of hinaarare in your bag, then you output "three"
        or 4 kinds of hinaarare in your bag, then you output "Four"

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,i;
    char S;
    int p=0,w=0,g=0,y=0;
    int color=0;

    cin >> N;

    for(i=0;i<N;i++){
        cin >> S;
        if(S=='P'){
            p=1;
        }
        else if(S=='W'){
            w=1;
        }
        else if(S=='G'){
            g=1;
        }
        else if(S=='Y'){
            y=1;
        }
        else{
            cout << "error" << endl;
            break;
        }
    }
    color=p+w+g+y;
    if(color==3){
        cout << "Three" << endl;
    }
    else if(color==4){
        cout << "Four" << endl;
    }
    else{
        cout << "Error" << endl;
    }
}
