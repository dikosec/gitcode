/*
論理演算-否定   : !(条件式)

CONST   :0<=A, B<=100
         A,B are integer
         op is one of +,-,*,/,?,=,!.

INPUT   :A op B
OUTPUT  :入力の計算式の計算結果を出力してください。
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    string op;

    cin >> A >> op >> B;

    if(op=="+"){
        cout << A+B << endl;
    }
    else if(op=="-"){
        cout << A-B << endl;
    }
    else if(op=="*"){
        cout << A*B << endl;
    }
    else if(op=="/"){
        if(B==0){
            cout << "error" << endl;
        }
        else{
            cout << A/B << endl;
        }
    }else if((op=="?") || (op=="=") || (op=="!")){
        cout << "error" << endl;
    }

}