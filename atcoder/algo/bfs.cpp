#include<bits/stdc++.h>
using namespace std;

//for loop関係
#define rep(i,a,n) for(int i=(a);i<(n);++i)
#define repe(i,a,n) for(int i=(a);i<=(n);++i)
#define rrep(i,n,a) for(int i=(n);n>(a);--i)
#define rrepe(i,n,a) for(int i=(n);n>=(a);--i)

//略記
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define ENDL << "\n"

using ll = long long;
using P = pair<int,int>;
using itn = int;

//定数
const int INF = 1<<30;
const ll MOD = 1000000007;
const long double PI =(acos(-1));

//隣接リスト
vector<int> to[100005];

void bfs(int n){
    queue<int> q;
    vector<int> dist(n,-1);
    vector<int> pre(n,-1);

    dist[0]=0;
    q.push(0);

    while(!q.empty()){
        int v=q.front(); q.pop();
        for(int u : to[v]){
            if(dist[u]!=(-1))continue;
            dist[u]=dist[v]+1;
            pre[u]=v;
            q.push(u);
        }
    }

    
    rep(i,0,n){
        int ans=pre[i];
        cout << ans ENDL;
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;
    cin >> N >> M;
	rep(i,0,M){
		int a,b;
		cin >> a >> b;		    
        to[a].push_back(b);
        to[b].push_back(a);
	}

    bfs(N);
    
    return 0;
}