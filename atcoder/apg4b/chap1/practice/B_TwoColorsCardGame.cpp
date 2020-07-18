/*
QUESTION    :高橋君は青いカードをN枚、赤いカードをM枚持っています。カードにはそれぞれ文字列が書かれており、i枚目の青いカードに書かれている文字列
             はsi、i枚目の赤いカードに書かれている文字列はtiです。
             高橋君は、文字列を1つ言います。そして、全てのカードを確認し、その文字列が書かれた青いカードを1枚見つけるごとに1円貰えます。また、その
             文字列が書かれた赤いカードを1枚見つけるごとに1円失います。
             なお、高橋君の言った文字列と、カードに書かれた文字列が完全に一致していた場合のみを考えます。例えば、高橋君が'atcoder'と言った場合、
             'atcoderr','atcode','btcoder'などと書かれた青いカードがあってもお金は貰えません。逆にこのような文字列が書かれた赤いカードがあっても
             お金を失うことはありません。
             高橋君は、最大で差し引き何円もらうことができるでしょうか？
             ただし、違うカードに同じ文字列が書かれていることもあることに注意してください。

CONST       :N,M is integer
             1<=N,M<=100
             s1,s2,...,sN,t1,t2,...,tMは全て長さ1以上10以下の文字列で、英小文字のみからなる。
             

INPUT       :N
             s1
             s2
             .
             .
             sN
             M
             t1
             t2
             .
             .
             tM


OUTPUT      :高橋君が最大で差し引きx円貰える時、xを出力せよ。
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M,i,j;

    //N枚の赤いカードsiを
    cin >> N;
    vector<string> s(N);
    for(i=0;i<N;i++){
        cin >> s.at(i);
    }

    cin >> M;
    vector<string> t(M);
    for(i=0;i<M;i++){
        cin >> t.at(i);
    }

    vector<int> money(N,0);

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(s.at(i)==s.at(j)){
                money.at(i)++;
            }
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            if(s.at(i)==t.at(j)){
                money.at(i)--;
            }
        }
    }

    int result=0;
    for(i=0;i<N;i++){
        if(result<money.at(i)){
            result=money.at(i);
        }
    }
   
    if(result<0){
        result=0;
    }
    cout << result << endl;
    
}