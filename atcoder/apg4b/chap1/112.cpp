/*
文字列と文字

文字列変数.at(i)でi番目の文字にアクセスできる。

全角文字はstring型の代わりにu32string型等を用いる。

.size()や==演算子等を利用する場合、一度変数に格納するか、""文字列"s.size()のように""の末尾にsをつける必要がある。

文字の辞書順
'0'~'9'-'A'~'Z'-'a'~'z'

+で文字列を連携できる。

getline(cin,文字列変数)  文字列変数で入力を一行受け取る。 こうすることで空白があっても空白ごと文字列として受け取ることができる

ex.
QUESTION    :1と+と-のみからなる式Sが1行で与えられるので計算結果を出力してください。
             具体的な式Sの形式は以下の通りです。
                式Sの1文字目は必ず1です。
                その後、「+または-」と1が交互に続きます。
                Sの最後の文字も必ず1です。
             式と演算子はスペースで区切られていないことに注意してください。

CONST       :1<=|S|<=100
             Sは1から始まり、その後+または=と1が交互に続き、1で終わる。

INPUT       :S

OUTPUT      :Sの計算結果を出力してください
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n;
    string S;
    int result=1;

    cin >> S;

    n=S.size();

    for(i=1;i<n;i+=2){
        if(S.at(i)=='+'){
            result++;
        }
        else if(S.at(i)=='-'){
            result--;
        }
        else{
            cout << "Error" << endl;
        }
    }

    cout << result << endl;
}