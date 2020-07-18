/*
QUESTION    :

RULE        :

INPUT       :

OUTPUT      :

SNUKE       :
int main(){
    int x,n;
    cin >> x >> n;
    vector<int> d(102);
    rep(i,n){
        int p;
        cin >> p;
        d[p]=1;
    }
    //ans(差分,i)
    P ans(99999,-1);
    for(int i=0;i<=101;++i){
        if(d[i]==1) continue;
        int dif=abs(x-i);
        //difが最も小さいものがansに入る
        ans=min(ans,P(dif,i));
    }
    cout << ans.second << endl;
}
*/

#include<bits/stdc++.h>
#include<algorithm>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

bool check(int i,vector<int> &p){
    int flag=1;
    for(int k=0;k<p.size();k++){
        if(i==p.at(k)){
            flag=0;
        }
    }
    return flag;
}

int main(){
    int X,N;
    cin >> X >> N;

    vector<int> p(N,0);
    rep(i,N){
        cin >> p.at(i);
    }

    int mint=100000000;
    int ans=0;
    int temp=0;
    rep(i,1000){
        if(check(i,p)){
            if(i<X){
                temp=mint;
                mint=min(mint,X-i);
                if(mint<temp){
                    ans=i;
                }
                
            }else if(i>X){
                temp=mint;
                mint=min(mint,i-X);
                if(mint<temp){
                    ans=i;
                }
            }else{
                ans=i;
            }
        }
    }

    cout << ans << endl;

    return 0;
}