/**/


#include<bits/stdc++.h>
using namespace std;

int main(){
    string T;
    cin >> T;

    
    //?の数を数える
    int count=0;
    for(int i=0;i<T.size();i++){
        if(T.at(i)=='?'){
            count++;
        }
    }

    count= 2 << count;

    //?の置き換え
    char A[count][T.size()];
    //vector<vector<string>> A(count);
    int j=0;
    for(int i=0;i<T.size();i++){
        for(int j=0;j<count;j++){
            if(T.at(i)=='?'){
                if(j<count/2){
                    A[j]=T;
                    A[j][i]='P';
                }
                else{
                    A[j]=T.replace(0,i,'D');
                }
            }
        }
    }


    //d,pdのカウント
    int d_count=0;
    int d_count_max=0;
    int pd_count=0;
    int pd_count_max=0;
    int ans_num=0;
    string pre=".";
    for(int i=0;i<count;i++){
        d_count=0;
        pd_count=0;
        for(int j=0;j<T.size();j++){
            if(A[i][j]=='P'){
                pre="P";
            }
            /*
            else if(A.at(i).at(j)=='D'){
                d_count++;
                if(pre=="P"){
                    pd_count++;
                    pre=".";
                }
            }

            d_count_max=max(d_count,d_count_max);
            pd_count_max=max(pd_count,pd_count_max);

            if(d_count_max==d_count){
                if(pd_count_max==pd_count){
                    ans_num=i;
                }
            }
            */
        }
    }
/*

    cout << A.at(ans_num) << endl;
*/
}