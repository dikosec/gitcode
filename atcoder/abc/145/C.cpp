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



int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}

long double avlen(auto &nums, auto &xy){
    long double ans=0;
    for(int i=1;i<nums.size();i++){
        int tmp=0;
        rep(j,0,2){
            int tmp1 = xy[nums[i-1]][j]-xy[nums[i]][j];
            tmp+=(tmp1*tmp1);
        }
        ans+=sqrt(tmp);
    }
    return ans;
}

void print_vec(vector<int> &nums){
    for(auto &i : nums){
        cout << i << " ";
    }
    cout ENDL;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<vector<int>> xy(n,vector<int> (2));
    
    vector<int> nums(n);
    iota(nums.begin(),nums.end(),1);
    
    rep(i,0,n){
        rep(j,0,2){
            cin >> xy[i][j];
        }
    }

    long double ans=0;
    do{
        print_vec(nums);
        //ans += avlen(nums,xy);
    }while(next_permutation(all(nums)));
    cout << fixed << setprecision(20);
    cout << ans ENDL;



    
    return 0;
}