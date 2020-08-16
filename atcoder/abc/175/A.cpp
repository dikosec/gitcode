#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int cnt=0;
  string s; cin >> s;
//   if(s[0]=='R'){
//       if(s[1]=='R'){
//           if(s[2]=='R'){
//               cnt=3;
//           }else{
//               cnt=2;
//           }
//       }else{
//           cnt=1;
//       }
//   }else{
//       if(s[1]=='R'){
//           if(s[2]=='R'){
//               cnt=2;
//           }else{
//               cnt=1;
//           }
//       }else{
//           if(s[2]=='R'){
//               cnt=1;
//           }else{
//               cnt=0;
//           }
//       }
//   }
  
  if(s=="RRR") cout << 3 ENDL;
  if(s=="RRS") cout << 2 ENDL;
  if(s=="RSR") cout << 1 ENDL;
  if(s=="RSS") cout << 1 ENDL;
  if(s=="SRR") cout << 2 ENDL;
  if(s=="SRS") cout << 1 ENDL;
  if(s=="SSR") cout << 1 ENDL;
  if(s=="SSS") cout << 0 ENDL;

  return 0;
  //cout << cnt << endl;
}