/*
QUESTION    :すぬけ君は1,2,3の番号がついた3つのマスからなるマス目を持っています。各マスには'0'か'1'が書かれており、マスiにはsiが書かれています。
             すぬけ君は'1'が書かれたマスにビー玉を置きます。ビー玉が置かれるマスがいくるあるか求めてください。

RULE        :s1,s2,s3は'1'or'0'

INPUT       :s1s2s3

OUTPUT      :
*/

#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int s;
    cin >> s;

    int count=0;
    for(int i=0;i<3;i++){
        if(s%10==1){
            count++;
        }
        s/=10;
    }

    cout << count << endl;
    return 0;
}