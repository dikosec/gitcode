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
using namespace std;
using ll = long long;
using P = pair<int,int>;

const ll ma=100000000; 
/*
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    
    vector<int> A(n);
    rep(i,n){
        cin >> A.at(i);
    }
    
    vector<int> B(m);
    rep(i,m){
        cin >> B.at(i);
    }

    int count=0;
    ll sum=0;
    //sort(A.begin(),A.end());
    //sort(B.begin(),B.end());
    
    int tmp=max(n,m);
    for(int i=0;i<n+m;i++){
            if(sum<=k){
                sort(A.begin(),A.end());
                sort(B.begin(),B.end());
                sum+=min(A.front(),B.front());
                if(A.at(0)==min(A.front(),B.front())){
                    A.at(0)=ma;
                    //sort(A.begin(),A.end());
                }
                else{
                    B.at(0)=ma;
                    //sort(B.begin(),B.end());
                }
            }
            if(sum<=k){
                count++;
            }    
    }   
    
    cout << count << endl;
    return 0;
}*/

int main(){
    ll n,m,k;
    cin >> n >> m >> k;

    vector<ll> A(n+1);
    vector<ll> B(m+1);

    rep(i,0,n) cin >> A.at(i);
    rep(i,0,m) cin >> B.at(i);

    vector<bool> Ab(n,false);
    vector<bool> Bb(m,false);

    int i=0,j=0;
    int count=0,sumtime=0;

    while(sumtime<=k){
        if(A.at(i)<B.at(j)){
            if(i>n) continue;
            sumtime+=A.at(i);
            count++;
            i++;
        }
        else{
            
            if(j>m) continue;
            sumtime+=B.at(j);
            count++;
            j++;
        }
    }

    cout << count << endl;


}