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
//kotatsugameさん解答
#include<bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<(n);++i)
#define repeq(i,a,n) for(int i=a;i<=(n);++i)
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const long double PI =(acos(-1));

int cnt[10004];
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=100;++i){
        for(int j=1;j<=100;++j){
            for(int k=1;k<=100;++k){
                int t=i*i+j*j+k*k+i*j+j*k+k*i;
                if(t<=n) cnt[t]++;
            }
        }
    }
    for(int i=1;i<=n;++i){
        cout << cnt[i] << endl;
    }
    return 0;
}