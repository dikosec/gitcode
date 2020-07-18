/*
QUESTION    :高橋君は、ソフトウェア会社に勤めています。その会社では、短い変数名はバグを生む原因だと信じられており、長い変数名を使う
             習慣があります。
             今高橋君は2つの変数名を思いつきましたが、残念なことにその長さを見分けることができません。
             いろんな意味で可哀そうな彼の代わりに、与えられた2つの小文字アルファベットのみからなる文字列のうち、文字数が長いほうの
             文字列を求めてください。

CONST       :1<=|A|,|B|<=50
             A,B are consist from small letters.

INPUT       :A
             B

OUTPUT      :文字列が長いほうの文字列を一行で出力せよ。

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string A,B;
    
    cin >> A >> B;
    
    if(A.size()>B.size()){
        cout << A << endl;
    }
    else{
        cout << B << endl;
    }

}