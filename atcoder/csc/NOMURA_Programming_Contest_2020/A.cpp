/**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int H1,M1,H2,M2,K;

    cin >> H1 >> M1 >> H2 >> M2 >> K;

    int m1=H1*60+M1;
    int m2=H2*60+M2;

    int ans=(m2-m1)-K;

    cout << ans << endl;
    

}