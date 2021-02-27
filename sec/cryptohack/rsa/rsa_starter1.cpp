// Find the solution to 101^17 mod 22663

#include<bits/stdc++.h>
using namespace std;


uint64_t mypow(uint64_t base, uint64_t exponent, uint64_t modulus){
    uint64_t ans=base;
    for(int i=1; i<exponent; i++){
        ans = (ans%modulus)*base;
    }

    return ans%modulus;
}

int main(){
    //cout << mypow(101,17,22663) << endl;
}