/*
QUESTION    :

RULE        :

INPUT       :

OUTPUT      :
*/

#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    
    int N,K;
    cin >> N >> K;

    vector<int> A(N);
    rep(i,N){
        cin >> A.at(i);
    }
    
    bool ans=0;
    int sum=0;
    //最大20個の組み合わせを考える
    for(int tmp=0;tmp<(1<<20);tmp++){
        bitset<20> s(tmp);

        sum=0;
        for(int i=0;i<N;i++){
            if(s.test(i)){
                sum+=A.at(i);
            }
        }

        if(sum==K){
            ans=1;
        }
    }

    if(ans){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
 
    return 0;
}