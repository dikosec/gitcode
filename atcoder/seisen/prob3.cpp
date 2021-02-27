#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int l=s.size();

    int ans=0;
    for(int i=0;i<l;i++){
        for(int j=i;j<l;j++){
            string sub = s.substr(i,j-i+1); // IMPO
            int subl = sub.size();

            int cnt=0;
            for(int k=0;k<subl;k++){
                char c = sub[k];
                if(c=='A' || c=='C' || c=='G' || c=='T'){
                    cnt++;
                    ans=max(ans,cnt);
                }else{
                    break;
                }
            }
        }
    }

    cout << ans << endl;
}