/*
QUESTION    :高橋君はとあるWebサービスに会員登録しようとしています。
             まずIDをSとして登録しようとしました。しかし、このIDは既に他のユーザーによって使用されていました。
             そこで、高橋君はSの末尾に1文字追加した文字列をIDとして登録することを考えました。
             高橋君は新しくIDをTとして登録しようとしています。これが前述の条件を満たすか判定してください。

CONST       :S,T are small letter
             1<=|S|<=10
             |T|=|S|+1

INPUT       :S
             T

OUTPUT      :Yes/No
*/

#include<bits/stdc++.h>
using namespace std;

char tolowr(char c) {
  if ((c >= 'A') && (c <= 'Z')){
    return (c + 0x20);
  } else {
    return 0;
  }
}


int main(){
    int i,flug=0;
    string S;
    string T;
    int s,t;
    char c;

    cin >> S >> T;

    s=S.size();
    t=T.size();
    
    for(i=0;i<s;i++){
        if(S.at(i)!=T.at(i)){
            flug=1;
        }
    }

    if(t-s==1 && flug==0 && T.at(t-1)==tolower(T.at(t-1))){
        if(t<=11){

                cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    else{
        cout << "No" << endl;
    }

}