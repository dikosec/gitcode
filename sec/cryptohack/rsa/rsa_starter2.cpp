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
    uint64_t p = 17;
    uint64_t q = 23;
    uint64_t m = 12;
    uint64_t e = 65537;

    cout << mypow(12,e,p*q) << endl;
}