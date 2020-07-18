/*
平均との差

QUESTION    :N人のテストの点数が与えられます。  
             それぞれの人の点数が平均点から何点離れているか計算してください。
             平均点は次の式で求められます。i番目の人の点数はAiで表します。
             平均点＝(A1+A2+....+AN)/N
             平均点が整数にならない場合、小数点以下を切り捨てた数値を平均点とします。

CONST       :1<=N<=1000
             0<=Ai<=100
             N,Ai are integer

INPUT       :N
             A1 A2 ... AN

OUTPUT      :一人目の計算結果
             二人目の計算結果
             .
             .
             N人目の計算結果
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,i;
    int sum=0;
    int mean=0;
    

    cin >> N;
    vector<int> A(N);

    for(i=0;i<N;i++){
        cin >> A.at(i);
        sum+=A.at(i);
    }

    mean=sum/N;

    for(i=0;i<N;i++){
        if(mean>A.at(i)){
            cout << mean-A.at(i) << endl;
        }
        else if(mean<A.at(i)){
            cout << A.at(i)-mean << endl;
        }
        else{
            cout << 0 << endl;
        }
    }

}