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
const long double PI =(acos(-1));

int main(){
    int L,R,d;
    int cnt=0;
    cin >> L >> R >>d;
    for(int i=L;i<=R;++i){
        if(i%d==0){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}