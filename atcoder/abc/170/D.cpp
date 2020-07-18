/*
QUESTION    :

RULE        :

INPUT       :

OUTPUT      :
*/
/*
#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N,0);
    rep(i,N){
        cin >> A.at(i);
    }
    
    int count=0;
    int ans=0;
    rep(i,N){
        count=0;
        rep(j,N){
            if(i!=j){
                if(A.at(i)>=A.at(j)){
                    if((A.at(i)%A.at(j))!=0){
                        count++;
                    }
                }
            }
        }
        if(count==N-1){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
*/
//SNUKE
#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){

    return 0;
}