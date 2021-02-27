#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;

    for(int i=1;i<=26;i++){
        cout << "case : " << i << endl;

        for(int j=0;j<s.size();j++){
            char tmp = s[j];
            if(int(tmp+i)>int('Z')){
                cout << char(tmp+(i-26));
            }
            else{
                cout << char(tmp+i);
            }
        }cout << endl;

    }

    return 0;
}