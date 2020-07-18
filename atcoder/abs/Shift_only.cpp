/*
QUESTION    :黒板にN個の正の整数A1,...,ANが書かれています。
             すぬけ君は、黒板に書かれている整数がすべて偶数であるとき、次の操作を行うことができます。
             　黒板に書かれている整数すべてを、2で割ったものに置き換える。
             すぬけ君は最大で何回操作を行うことができるかを求めてください。

RULE        :1<=N<=200
             1<=Ai<=10^9

INPUT       :N
             A1 A2 ... AN

OUTPUT      :count
*/

#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

bool are_even(vector<int> &A){
    //cout << "are_even() is called ";
    int count=0;
    int n=A.size();
    rep(i,n){
        if(A.at(i)%2==0){
            count++;
        }
    }
    //cout << "n=" << n << " count=" << count << endl;
    if(count==n){
        //cout << "=> true" << endl;
        return true;
    }
    else{
        //cout << "=> flase" << endl;
        return false;
    }
}

void print_vec(vector<int> &A){
    int n=A.size();
    rep(i,n){
        cout << A.at(i) << "  " << endl;
    }
}

void all_sfhit_write(vector<int> &A,int x){
    int n=A.size();
    rep(i,n){
        A.at(i)=A.at(i)>>x;
    }
}

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    rep(i,N){
        cin >> A.at(i);
    }

    int count=0;

    while(are_even(A)){
        count++;
        all_sfhit_write(A,1);
        //print_vec(A);
    }
        
    cout << count << endl;

    return 0;
}