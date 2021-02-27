#include<bits/stdc++.h>
using namespace std;

int divisor_cnt(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) cnt++;
    }
    return cnt;
}

int main(){
    int n; cin >> n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(i%2==1 && divisor_cnt(i)==8){
            cnt++;
        }    
    }
    cout << cnt << endl;
}