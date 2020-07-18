/*
QUESTION    :シカのAtDeerくんは二つの正整数a,bを見つけました。aとbの積が偶数か奇数か判定してください。

RULE        :1<=a,b<=10000
             a,b are integer

INPUT       :a b

OUTPUT      :Odd/Even
*/

#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int a,b;
    cin >> a >> b;

    if(a*b%2){
        cout << "Odd" << endl;
    }
    else{
        cout << "Even" << endl;
    }

    return 0;
}