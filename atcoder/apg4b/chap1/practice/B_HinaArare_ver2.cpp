#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,i;
    char s;
    int flug=0;

    cin >> N;

    for(i=0;i<N;i++){
        cin >> s;
        if(s=='Y'){
            flug=1;
        }
    }

    if(flug==1){
        cout << "Four" << endl;
    }
    else{
        cout << "Three" << endl;
    }
}