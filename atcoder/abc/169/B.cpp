/*B*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    uint64_t A;
    uint64_t ans=1;
    uint64_t MAX=1000000000000000000;
    cin >> N;
    //int flag=0;
    for(int i=0;i<N;i++){
        cin >> A;
        ans=(uint64_t)((double)ans*A);
       
    }

    if(ans>MAX){
        cout << -1 << endl; 
    }
    else{
        cout << fixed << setprecision(0);
        cout << ans << endl;
    }

}