/*
QUESTION    :英小文字cが与えられるので、cが母音であるか判定してください。

CONST       :cは英小文字である。

INPUT       :c

OUTPUT      :cが母音であるとき、'vowel'と、そうでないとき'consonant'と出力せよ。
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;

    cin >> c;

    if(c=='a'||c=='i'||c=='u'||c=='e'||c=='o'){
        cout << "vowel" << endl;
    }
    else{
        cout << "consonant" << endl;
    }
}