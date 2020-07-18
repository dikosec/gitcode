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
#define rep(i,a,n) for(int i=a;i<=(n);++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

//d日目のsから満足度が最大のコンテストのタイプと満足度を返す。
tuple<ll,int> s_max(vector<vector<ll>> &s,int d){
    ll smax=0;
    ll tmp=0;
    int imax=0;
    for(int i=1;i<=26;++i){
        tmp=smax;
        //満足度が最大となるものの探索
        smax=max(smax,s.at(d).at(i));
        //最大満足度が更新されたときのタイプiを保持
        if(tmp!=smax){
            imax=i;
        }
    }

    return forward_as_tuple(smax,imax);
}
//前日までの低下満足度
tuple<ll,int> s_maxb(vector<vector<ll>> &s,ll decst,int d){
    ll smax=0;
    ll tmp=0;
    int imax=0;

    for(int i=1;i<=26;++i){
        tmp=smax;
        //満足度-低下満足度が最大になるものの探索
        smax=max(smax,(s.at(d).at(i)-decst));
        //満足度ー低下満足度が最大になるもののタイプiを保持
        if(tmp!=smax){
            imax=i;
        }
    }
    //タイプimaxの時の満足度が最大と分かったのでそのときの満足度を返す
    smax=s.at(d).at(imax);

    return forward_as_tuple(smax,imax);
}

ll get_decst(vector<ll> &c,int d,vector<vector<ll>> &last){
    ll ans=0;
    for(int i=1;i<=26;i++){
        ans+=c.at(i)*(d-last.at(d).at(i));
    }

    return ans;
}

void last_update(vector<vector<ll>> &last,int d){
    for(int i=1;i<=26;++i){
        if(last.at(d-1).at(i)>0){
            if(d==365) break;
            last.at(d).at(i)=last.at(d-1).at(i);
        }
    }
}

int main(){
    //総日数Dの受け取り
    int D;
    cin >> D;

    //それぞれのタイプの満足度の下がりやすさciの受け取り
    vector<ll> c(27);
    for(int i=1;i<=26;++i){
        cin >> c.at(i);
    }

    //d日目にタイプiのコンテストを実施した場合に上昇する満足度sdi
    vector<vector<ll>> s(D+1,vector<ll> (27));
    for(int d=1;d<=D;++d){
        for(int i=1;i<=26;++i){
            cin >> s.at(d).at(i);
        }
    }

    //満足度
    ll satisfaction=0;
    //i日に実施すべきコンテストタイプ
    vector<ll> t(366);
    //d日目以前タイプiのコンテストを実施した最後の日last(d,i)
    vector<vector<ll>> last(366,vector<ll> (27));
    //d日目の終わりに低下する満足度
    ll decst=0;

    for(int d=1;d<=D;++d){
        if(d==1){
            ll a;
            int b;
            tie(a,b)=s_max(s,d);
            satisfaction+=a;
            last.at(d).at(b)++;
            decst=get_decst(c,d,last);
            satisfaction-=decst;
            t.at(d)=b;
        }
        
        else {
            ll a;
            int b;
            last_update(last,d);
            tie(a,b)=s_maxb(s,decst,d);
            satisfaction+=a;
            last.at(d).at(b)+=d;
            decst=get_decst(c,d,last);
            satisfaction-=decst;
            t.at(d)=b;
        }
    }
    for(int i=1;i<=D;++i){
        cout << t.at(i) << endl;;
    }
    
    return 0;
}