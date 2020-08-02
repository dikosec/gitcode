#include<stdio.h>
#include<math.h>
int main (void){
long long int n,d,i,count;
long long int s,z;
long long int x[2*10*10*10*10*10*10];
long long int y[2*10*10*10*10*10*10];
s=0;
z=0;
count=0;
scanf("%ld %ld", &n, &d);
//printf("n:%lld and d:%lld",n,d);
for(i=0;i<n;i++){
    scanf("%ld %ld", &x[i], &y[i]); 
    // s = pow(x[i],2)+pow(y[i],2);
    // z = sqrt(s);
    // if(d>=z)count++;
    if(sqrt(x[i]*x[i]+y[i]*y[i])){
        count++;
    }
}
printf("%ld",count);
return 0;
}