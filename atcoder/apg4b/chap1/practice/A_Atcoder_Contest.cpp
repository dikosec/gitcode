/*
QUESTION    :すぬけ君は,AtCoder　s　Contestという名前のコンテストを開こうとしています。ここで、sは長さ1以上の文字列であり、1文字目は英大文字、
             2文字目以降は英小文字です。
             すぬけ君は、このコンテストの略称をAxCに決めました。ここで、xはsの先頭の英大文字です。
             コンテストの名前が与えられるので、コンテストの略称を出力してください。 

CONST       :sの長さは1以上100以下である。
             sの1文字目は英大文字である。
             sの2文字目以降は英小文字である。

INPUT       :AtCoderr S Contest

OUTPUT      :コンテストの略称を出力せよ。

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string result="AxC";

    getline(cin,s);

    result.at(1)=s.at(8);

    cout << result << endl;

}