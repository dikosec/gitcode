/*
QUESTION    :あなたは500円玉をA枚、100円玉をB枚、50円玉をC枚持っています。これらの硬貨の中から何枚かを選び、合計金額をちょうどX円にする方法は
             何通りありますか？
             同じ種類の硬貨どうしは区別ができません。2通りの硬貨の選び方は、ある種類の硬貨についてその硬貨を選ぶ枚数が異なるとき区別されます。

RULE        :0<=A,B,C<=50
             A+B+C>1
             50<=X<=20,000
             A,B,C are integer
             X is multiple of 50;

INPUT       :A
             B
             C
             X

OUTPUT      :how many ways of choosing coins?
*/

#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<=(n);i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    const int max=50;
    int a,b,c,x;
    cin >> a >> b >> c >> x;
    int count=0;
    rep(i,a){
        rep(j,b){
            rep(k,c){
                if((500*i+100*j+50*k)==x){
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}