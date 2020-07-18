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
#define repeq(i,a,n) for(int i=a;i<=(n);++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    if(n>=1000){
        int a=0;
        if(n%1000==0){
            n=0;
        }else{
            a=n/1000+1;
        }       
        cout << (a*1000)-n << endl;
    }else {
        cout << (1000-n) << endl;
    }
    return 0;
}