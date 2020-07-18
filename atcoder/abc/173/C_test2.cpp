/*
QUESTION    :

RULE        :

INPUT       :

OUTPUT      :
*/
/*
    int     :10^9
long long   :10^19
*/
#include<bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<(n);++i)
#define repeq(i,a,n) for(int i=a;i<=(n);++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int h,w,k;
    cin >> h >> w >> k;

    //盤読み込み #の総数カウント
    vector<vector<char>> c(h+1,vector<char> (w+1));
    vector<int> H(h+1);
    vector<int> W(w+1);
    int count=0;
    vector<int> oneh(h+1);
    vector<int> onew(w+1);
    rep(i,0,h){
        rep(j,0,w){
            cin >> c.at(i).at(j); 
            if(c.at(i).at(j)=='#'){
                count++;
                H.at(i)++;
                W.at(j)++;
                oneh.at(i)=1;
                onew.at(j)=1;
            }
        }
    }
    cout << "count: " << count << endl;
    rep(i,0,h+1){
        cout << H.at(i) << "  ";
    }cout << endl;
    rep(i,0,w+1){
        cout << W.at(i) << "  ";
    }cout << endl;

    int sum=0;
    int sum2=0;
    int ans=0;

    for(int tmp=0;tmp<(1<<(h+1));++tmp){
        bitset<7> a(tmp);

        sum=0;
        cout <<"a : " << a << endl;
        for(int l=0;l<h+1;++l){
            if(a.test(l)){
                sum+=H.at(l);
            }
        }
        for(int tmp2=0;tmp2<(1<<(w+1));++tmp2){
            bitset<7> b(tmp2);
            sum2=0;
            cout << " b : " << b << endl;
            for(int i=0;i<h+1;++i){
                if(b.test(i)){
                    sum2+=W.at(i);
                }
            }cout << "sum : " << (sum+sum2) << endl;
            for(int m=0;m<h+1;++m){
                for(int n=0;n<w+1;++n){
                    if(oneh.at(m)==1 && onew.at(n)==1){
                        sum--;
                    }
                }
            }
            if((count-(sum+sum2))==k){
                ans++;
            }
            
        }
        
        
    }

    cout << ans << endl;
    return 0;
}