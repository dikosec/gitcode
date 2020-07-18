/*
STL :Standard Template Library

min()   :min関数は、2つの引数のうち小さいほうの値を返します。

max()   :max関数は、2つの引数のうち大きいほうの値を返します。

swap()  :swap関数は、2つの引数の値を交換します。

sort(vec.begin(),vec.end())     :sort関数を使うと、配列の要素を小さい順に並び替えることができます。

reverse(vec.begin(),vec.end())  :reverse関数を使うと、配列の要素の並びを逆にできます。

sort関数を使ってからreverse関数を使うと配列の要素を大きい順に並び替えることができます。

QUESTION    :三人兄弟のA君とB君とC君が背比べしています。
             三人の身長が与えられるので、最も大きい人と最も小さい人の身長差を出力してください。
             
CONST       :1<=A,B,C<=200
             A,B,C are integer

INPUT       :A B C

OUTPUT      :最大と最小の身長差
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C;
    cin >> A >> B >> C;

    int MAX,MIN;

    MAX=max(max(A,B),C);
    MIN=min(min(A,B),C);

    cout << (MAX-MIN) << endl;
}