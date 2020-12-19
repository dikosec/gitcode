#include<bits/stdc++.h>
using namespace std;

// for loop
#define rep(i,a,n) for(int i=(a);i<(n);++i)
#define repe(i,a,n) for(int i=(a);i<=(n);++i)
#define rrep(i,n,a) for(int i=(n);n>(a);--i)
#define rrepe(i,n,a) for(int i=(n);n>=(a);--i)

// abbreviati
#define PB(v) push_back(v)
#define MP(A,B) make_pair(A,B)
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define ENDL << "\n"

using ll = long long;
using P = pair<int,int>;
using itn = int;

// constant
const int INF = 1<<30;
const ll INFLL = 1LL << 60;
const ll MOD = 1000000007;
const long double PI =(acos(-1));

/***Snippet***************************************************
ifelse, isprime, torad, todeg, lcm, bfs,chmin,chmax
**************************************************************/

// adjacency list
vector<int> to[100005];

// Graph
using Graph = vector<vector<int>>;

// Grid
int H,W;
vector<vector<int>> field;

// 4方向への移動ベクトル
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};

// setprecision
//cout << fixed << setprecision(n);

ll de28(int dec){
    //cout << "dec:" << dec ENDL;
    bool flag=0;
    while(dec){
        int amari=dec%8;
        if(amari==7){
            flag=1;
        }
        //cout << "ama:" << amari ENDL;
        dec/=8;
    }
    //sort(all(ans));
    //sort(ans.end(),ans.begin());
    if(flag){
        return 1;
    }else
    {
        return 0;
    }
    
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    ll cnt=0;
    rep(i,1,n+1){
        string s=to_string(i);
        int len=s.size();
        bool flag8=1;
        bool flag10=0;
        rep(j,0,len+1){
            if(s[j]=='7'){
                flag8=0;
                flag10=1;
            }
        }
        if(flag10){
            cnt++;
        }
        if(flag8){
            ll s8=de28(i);
            cnt +=s8;
        }
        

        //int s8=de28(i);
        //int len8 = s8.size();
        // cout << "v:" << v ENDL;
        // string s8 = to_string(v);
        //cnt +=s8;
    }

    //cout << "cnt:" << cnt ENDL;
    // if(n>=7) {
    //     cnt--;
    //     //cout << "n>=7" ENDL;
    //     //cout << "cnt:" << cnt ENDL;
    // }
    cout << n-cnt ENDL;
    
    
    return 0;
}