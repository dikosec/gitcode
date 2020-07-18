/*
QUESTION    :高橋君はデータの加工が行いたいです。   
             整数a,b,cと、文字列sが与えられます。a+b+cの計算結果と、文字列sを並べて表示しなさい。

RULE        :1<=a,b,c<=1000
             1<=|s|<=100

INPUT       :a
             b c
             s

OUTPUT      :
*/

#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int a,b,c;
    string s;
    cin >> a >> b >> c >> s;

    cout << (a+b+c) << " " << s << endl;
    return 0;
}