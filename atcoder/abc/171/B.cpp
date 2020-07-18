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
    int N;
    long unsigned int K;
    
    cin >> N >> K;

    vector<int> p(N);
    for(int i=0;i<N;i++){
        cin >> p.at(i);
    }

    
    
    //cout << "=============" <<endl;
    int total=0;
    int mint=10000000;
    for(int tmp=0;tmp<(1<<N);tmp++){
        bitset<1000> s(tmp);
        total=0;
        if(s.count()==K){
            //cout << "kokoniiru" << endl;
            for(int j=0;j<N;j++){
                if(s.test(j)){
                    total+=p.at(j);
                    //cout << "total:" << total << endl;
                }
                
            }mint=min(mint,total);
        } 
        //cout << mint << endl;
    }
    cout << mint << endl;
    return 0;
}