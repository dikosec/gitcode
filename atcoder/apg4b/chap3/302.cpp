/*
pair/tupltとauto
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<tuple<int,int,int>> a;
    a.push_back(make_tuple(3,1,1));
    a.push_back(make_tuple(1,2,100));

    for(auto d : a){
        int x;
        int y;
        int z;
        tie(x,y,z)=d;

        cout << x << y << z << endl;
    }
}
*/
/*
QUESTRION   :整数ai,biのペア(ai,bi)がN個与えられます(1<=i<=N)。biが小さい順にペアを並べ替えてください。

CONST       :1<=N<=100
             1<=ai,bi<=10^9
             biは全て異なる
             入力はすべて整数

INPUT       :N
             a1 b1
             a2 b2
             .
             .
             aN bN

OUTPUT      :ペアを並べ替えた順に1行毎に出力してください。各ペアはai,biをスペース区切りで出力してください。
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<pair<int,int>> p(N);
    for(int i=0;i<N;i++){
        int a,b;
        cin >> a >> b;
        p.at(i)=make_pair(b,a);
    }

    sort(p.begin(),p.end());

    for(auto d : p){
        int a,b;
        tie(b,a)=d;
        cout << a << " " << b << endl;
    }

}