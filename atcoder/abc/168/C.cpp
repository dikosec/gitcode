/*
2020/5/17
C

QUESTION    :

CONST       :

INPUT       :

OUTPUT      :
*/
/*
#include<bits/stdc++.h>
#include<cmath>
#include<math.h>
using namespace std;
int main(){
    int A,B,H,M;
    long double pi = 3.14159265358979323846264338327950;
    cin >> A >> B >> H >> M;

    int dif=H*5;

    //cout << "test" << cos(15) << endl;
    if(dif<0){
        dif=(-1)*dif;
    }
    //cout << "dif: " << dif << endl;
    int min_min=min(dif-M,M-dif);
    if(M==0){
        min_min=min(60-dif,dif);
        //cout << "!-> " << min_min << endl;
    }  
    long double dif_circle=min_min;
    if(dif_circle<0){
        dif_circle=(-1)*(dif_circle);
    }
    cout << dif_circle << endl;
    dif_circle=dif_circle*(pi/180)*6;
    //cout << "dif_circle: " << dif_circle << endl;
    long double cosy=cos(dif_circle);
    //cout << "cosy: " << cosy << endl;

    if(cosy<0) cosy=(-1)*cosy;
    long double  ans=((A*A)+(B*B))-(2*A*B*cosy);
    //cout << "ans^2: " << ans << endl;

    ans = sqrt(ans);
   
    cout << fixed << setprecision(21) << ans << endl;
    //cout << ans << endl;


}
*/
/*
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define PI 3.14159265358979323846264338327950L
int main(){
    int a,b,h,m;
    cin >> a >> b >> h >> m;

    long double rad=PI*2*((long double)h/12.0 + ((long double)m/60.0) /12.0 -(long double)m /60.0);
    long double rsq =(long double)(a*a+b*b)-(long double)(2*a*b)*cos(rad);

    cout << fixed << setprecision(20) << sqrt(rsq) << endl;
}
*/

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
const long double PI=acos(-1);

int main(){
    int a,b,h,m;
    cin >> a >> b >> h >> m;

    long double theta_m=((long double)m/60.0);
    long double theta_h=((long double)h/12.0+((long double)m/60.0)/12.0);
    long double rad=2*PI*(theta_m-theta_h);
    long double rsq=(long double)(a*a+b*b)-(long double)(2*a*b)*cos(rad);
    cout << rsq << endl;

    cout << fixed << setprecision(20) << sqrt(rsq) << endl;
}