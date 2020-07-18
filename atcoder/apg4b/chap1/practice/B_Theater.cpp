/*
QUESTION:joihinoお姉ちゃんは、劇場の受付を担当しています。
         この劇場には、席1から席100000までの、100000個の席があります。
         彼女のメモ書きによると、今までの間にN組の団体が来て、i組目の団体は席liから席riまでの連続した席に座っています。
         今、劇場の席には何人座っているか求めてください。

CONST   :1<=N<=1000
         1<=li<=ri<=100000
         同じ席に複数の人が座ることはない。
         入力は全て整数である。

INPUT   :N
         l1 r1
         :
         :
         lN rN

OUTPUT  :劇場の席に座っている人数を出力せよ。

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,i;
    int l,r;
    int sum=0;

    cin >> N;

    for(i=0;i<N;i++){
        cin >> l >> r;
        sum+=(r-(l-1));
    }

    cout << sum << endl;
}