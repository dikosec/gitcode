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
    int count=0;
    for(int i=1;i<=730;++i){
        printf("%3d :%3c ",i,'a'+(((i-1)/26)-1)%26);
        count++;
        if(i%26==5){
            cout << ". . . ";
            i+=15;
            count+=15;
        }
        if(count==26){
            cout << endl;
            count=0;
        }
    }

    cout << endl;
    return 0;
}