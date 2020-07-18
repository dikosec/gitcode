/*
二つの正整数a,bが与えられます。a,bの平均値をxとします。xの小数点以下を切りあげて得られる整数を出力してください。

CONST   :a,b are integer
         1<=b, b<=100

INPUT   :a b
OUTPUT  :xの小数点以下を切り上げて得られる整数

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;

    cin >> a >> b;

    cout << (a+b+1)/2 << endl;
}