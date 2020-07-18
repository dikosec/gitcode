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
    vector<vector<char>> c(h+1,vector<char> (w+1));
    int count=0;
    rep(i,0,h){
        rep(j,0,w){
            char n;
            cin >> n;
            c.at(i).at(j)=n;
        }
    }
    vector<int> t(14);
    //vector<int> y(w+1);
    rep(i,0,h){
        rep(j,0,w){
            if(c.at(i).at(j)=='#'){
                count++;
                t.at(i)++;
                t.at(7+j)++;
            }
        }
    }
    int sum=0;
    int ans=0;
    for(int tmp=0;tmp<(1<<(14));++tmp){
        bitset<14> s(tmp);

        for(int i=0;i<(14);++i){
            if(s.test(i)){
                sum+=t.at(i);
                if(c.at(i).at(i)=='#'){
                        sum--;
                    }
            }
        }
        if(sum==k){
            ans++;
        }
    }
    cout << ans << endl;
    /*
    int ans=0;
    repeq(i,0,h){
        repeq(j,0,w){
            cout << "now:"<<" i:" << i << "  j:" << j << "  t.i:" << t.at(i) << "  y.j:" << y.at(j) << "  if():" << (count-(t.at(i)+y.at(j))) << endl; 
            int tmp=0;
            tmp=count-(t.at(i)+y.at(j));
            if(i<h && j<w){
                if(c.at(i).at(j)=='#'){
                tmp++;
                }
            }cout << "tmp: " << tmp << endl;
            if(tmp==k){
                
                ans++;
                cout << "ans " << ans << endl;
            }
        }
    }
    int tmpy=0;
    repeq(i,0,w){
        repeq(j,0,w){
            if(i==j){
                continue;
            }
            if(i==0 || j==0) continue;
            if(count-(y.at(i)+y.at(j))==k){
                tmpy++;
            }
        }
    }
    cout << "tmpy:" << tmpy/2 << endl;
    ans+=(tmpy/2);
    cout << "ans2: " << ans << endl;
    int tmpt=0;
    repeq(i,0,h){
        repeq(j,0,h){
            if(i==j){
                continue;
            }
            if(i==0 || j==0) continue;
            if(count-(t.at(i)+t.at(j))==k){
                tmpt++;
            }
        }
    }
    cout << "tmpt: " << tmpt/2 << endl;
    ans+=(tmpt/2);

    */
    //cout << ans << endl;
    return 0;
}