#include<bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<(n);i++)
using namespace std;

//隣接リストto[]   to[a]にはaと隣接する点が含まれる
vector<int> to[100005];
const int INF =1001001001;

int main(){
    int n,m;
    cin >> n >> m;
    rep(i,0,m){
        int a,b;
        cin >> a >> b;
        //添え字に対応させるために--
        --a; --b;
        //to[a]とto[b]が接続している
        to[a].push_back(b);     
        to[b].push_back(a);
    }
    //一時的に
    queue<int> q;
    //distはBFS木の層を保持する配列
    vector<int> dist(n, INF);
    //preはBFS木の親を保持する配列
    vector<int> pre(n,-1);
    //BFS木の層0を始点にする
    dist[0]=0;
    //初めに0(1)から見る
    q.push(0);
    //BFS木生成
    while(!q.empty()){
        //qの先頭から頂点を取り出す
        int v=q.front(); q.pop();
        //vに隣接する頂点を更新していく
        for(int u : to[v]){
            //距離がINFでないなら最短距離が求まっているので何もしない
            if(dist[u]!=INF) continue;
            //距離を+１して更新
            dist[u]=dist[v]+1;
            //uの親をvとして記録
            pre[u]=v;
            //uと接続している次にみる洞窟をqにpusu
            q.push(u);
        }
    }

    cout << "Yes" << endl;
    rep(i,1,n){
        if(i==0) continue;
        int ans = pre[i];
        ++ans;
        cout << ans << endl;
    }
    return 0;
}