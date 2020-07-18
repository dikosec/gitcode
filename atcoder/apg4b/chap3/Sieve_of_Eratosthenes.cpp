/*
QUESTION    :1~100までの素数を全て挙げなさい

RULE        :

INPUT       :

OUTPUT      :
*/

#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

const int N=1000000000;
int main(){
    vector<int> prime(N+1);
    for(int i=2;i<=N;i++){
        if(prime.at(i)==0){
            //prime.at(i)++;
            int j=i;
            j+=i;
            while(j<=N){
                //cout << j << " ";
                prime.at(j)++;
                j+=i;
            }
        }
    }
    //cout << endl;

    /*
    rep(i,N){
        cout << prime.at(i);
    }
    cout << endl;
    */
    int count=0;
    for(int i=2;i<=N;i++){
        if(prime.at(i)==0){
            count++;
            cout << i << ", ";
        }
    }
    cout << endl;
    cout << "10億までに素数は" << count << "個ありました！！！" << endl;
    return 0;
}