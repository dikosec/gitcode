/*
QUESTION    :N個の都市があり、M本の道路があります。
             i(1<=i<=M)番目の道路は、都市aiと都市bi(1<=ai,bi<=N)を双方向に進んでいます。
             同じ2つの年を結ぶ道路は、1本とは限りません。
             各都市から他の都市に向けて、何本の道路が伸びているか求めてください。

CONST       :2<=N,M<=50
             1<=ai,bi<=N
             ai!=bi
             入力は全て整数である。

INPUT       :N M
             a1 b1
             .
             .
             aM bM

OUTPUT      :答えをN行に出力せよ。
             i(1<=i<=N)行目には、都市iから他の都市に向けて、何本の道路が伸びているかを出力せよ。

COMPUTATIONAL COMPLEXITY    :O(N+M)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M,i,j;

    vector<int> a(50);
    vector<int> b(50);

    cin >> N >> M;

    vector<int> count(N,0);

    for(i=0;i<M;i++){
        cin >> a.at(i) >> b.at(i);
        count.at(a.at(i)-1)+=1;
        count.at(b.at(i)-1)+=1;
    }

    for(i=0;i<N;i++){
        cout << count.at(i) << endl;
    }
}