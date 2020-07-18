/*
CONST   :0<=R, G<=4500
         INPUT is integer
INPUT   :R
         G
OUTPUT  :高橋君が取るべきパフォーマンス
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    double R;
    int G;

    cin >> R >> G;

    cout << 2*G-R << endl;
}