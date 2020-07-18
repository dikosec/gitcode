/*
QUESTION    :

RULE        :

INPUT       :

OUTPUT      :
*/

#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,k;
    //INPUT:n,k  n:売られている果物の種類 k:何種類買うか
    cin >> n >> k;
    //INPUT:pi  売られている果物のそれぞれの価格
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    //果物の価格を小さい順にソート
    sort(p.begin(),p.end());
    //果物をn種類からk種類選んで買った時の合計金額を格納する変数
    int ans=0;
    //小さい順にk個買えば合計金額は最小になる
    rep(i,k){
        ans+=p[i];
    }
    //OUTPUT:ans
    cout << ans << endl;
    return 0;
}