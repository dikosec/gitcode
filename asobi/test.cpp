#include<array>
#include<iostream>
using namespace std;
int main(){
    array<uint32_t,630> tmp;

    for(int i=0;i<630;i++){
        tmp[i]=2;   
    }

    array<int32_t,630> tmp1;

    for(int i=0;i<630;i++){
        tmp1[i]=(int)tmp[i];
    }

    cout << "Pass?" << endl;


}

