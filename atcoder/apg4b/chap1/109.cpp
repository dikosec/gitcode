/*
CONST   :0<=x,a,b<=100
         x,a,b are integer

INPUT   :x a b
OUTPUT  :1.の出力
         2.の出力
         3.の出力
         4.の出力
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,a,b;
    cin >> x >> a >> b;

    //1.の出力
    x++;
    cout << x << endl;

    //2.の出力
    x*=(a+b);
    cout << x << endl;

    //3.の出力
    x*=x;
    cout << x << endl;

    //4.の出力
    x--;
    cout << x << endl;
}