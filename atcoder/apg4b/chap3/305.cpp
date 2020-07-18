/*
QUESTION    :

RULE        :

INPUT       :

OUTPUT      :
*/
/*

#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(N);
    for(int i=0;i<N;i++){
        cin >> A.at(i);
    }

    bool ans=false;

    //全ての選び方を試して、総和がKになるものがあるか調べる
    for(int tmp=0;tmp<(1<<20);tmp++){       //Nは最大20個だから20ビットのビット列として扱う
        bitset<20> s(tmp);

        //ビット列の1のビットに対応する整数を選んだとみなして総和を求める
        int sum=0;
        for(int i=0;i<N;i++){
            if(s.test(i)){
                sum+=A.at(i);
            }
        }
        if(sum==k){
            ans=true;
        }
    }

    if(ans){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
*/
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

//AとBに共通して含まれる要素からなる集合を返す
bitset<50> intersection(bitset<50> A,bitset<50> B){
    bitset<50> ans;
    for(int i=0;i<50;i++){
      if(A.test(i)==1&&B.test(i)==1){
          ans.set(i,1);
      }
    }

    return ans;
}

//AとBのうち少なくとも一方に含まれる要素からなる集合を返す
bitset<50> union_set(bitset<50> A,bitset<50> B){
    bitset<50> ans;
    for(int i=0;i<50;i++){
        if(A.test(i)||B.test(i)){
            ans.set(i,1);
        }
    }

    return ans;
}

//AのBのうちどちらか一方にだけ含まれる要素からなる集合を返す
bitset<50> symmetric_diff(bitset<50> A,bitset<50> B){
    bitset<50> ans;
    for(int i=0;i<50;i++){
        if((A.test(i)==1&&B.test(i)==0)||(A.test(i)==0&&B.test(i)==1)){
            ans.set(i,1);
        }
    }

    return ans;
}

//AからXを除く
bitset<50> subtract(bitset<50> A,int x){
    A.set(x,0);

    return A;
}

//Aに含まれる要素に1を加える(ただし、要素49が含まれる場合は0になるものとする)
bitset<50> increment(bitset<50> A){
    bitset<50> ans;
    ans=A << 1;
    if(A.test(49)){
        ans.set(0,1);
    }

    return ans;
}

//Aに含まれる要素から1を引く(ただし、要素0が含まれる場合は49になるものとする)
bitset<50> decrement(bitset<50> A){
    bitset<50> ans;
    ans=A >> 1;
    if(A.test(0)){
        ans.set(49,1);
    }

    return ans;
}

//Sに値xを加える
bitset<50> add(bitset<50> S,int x){
    S.set(x,1);
    return S;
}

//集合Sの内容を昇順で出力するA(スペース区切りで各要素の値を出力する)
void print_set(bitset<50> S){
    vector<int> cont;
    for(int i=0;i<50;i++){
        if(S.test(i)){
            cont.push_back(i);
        }
    }
    for(int i=0;i<cont.size();i++){
        if(i>0) cout << " ";
        cout << cont.at(i);
    }
    cout << endl;
}

int main(){
    bitset<50> A,B;
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int x;
        cin >> x;
        A=add(A,x);
    }

    int M;
    cin >> M;
    for(int i=0;i<M;i++){
        int x;
        cin >> x;
        B=add(B,x);
    }

    //操作
    string com;
    cin >> com;

    if(com=="intersection"){
        print_set(intersection(A,B));
    }
    else if(com=="union_set"){
        print_set(union_set(A,B));
    }
    else if(com=="symmetric_diff"){
        print_set(symmetric_diff(A,B));
    }
    else if(com=="subtract"){
        int x;
        cin >> x;
        print_set(subtract(A,x));
    }
    else if(com=="increment"){
        print_set(increment(A));
    }
    else if(com=="decrement"){
        print_set(decrement(A));
    }

    return 0;
}