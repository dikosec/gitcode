/*構造体*/
/*
QUESTION    :

RULE        :

INPUT       :

OUTPUT      :
*/

#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

struct Clock{
    int hour;
    int minute;
    int second;

    void set(int h,int m,int s){
        hour=h;
        minute=m;
        second=s;
    }

    string to_str(){
        string ret;

        if(!(0<=hour&&hour<=23&&0<=minute&&minute<=59&&0<=second&&second<=59)){
            return "error";
        }
        if(hour<10) ret += "0";
        ret+=to_string(hour);
        
        ret+=":";

        if(minute<10) ret += "0";
        ret+=to_string(minute);

        ret+=":";

        if(second<10) ret +="0";
        ret+=to_string(second);

        return ret;

    }

    void shift(int diff_second){
        int dh=diff_second/3600;
        diff_second=diff_second%=3600;
        int dm=diff_second/60;
        diff_second%=60;
        
        second+=diff_second;

        if(second>=60){
            minute+=1;
            second-=60;
        }else if(second<0){
            minute-=1;
            second+=60;
        }

        minute+=dm;
        if(minute>=60){
            hour+=1;
            minute-=60;
        }else if(minute<0){
            hour-=1;
            minute+=60;
        }

        hour+=dh;
        if(hour>=24){
            hour-=24;
        }else if(hour<0){
            hour+=24;
        }

    }
};

int main(){
    int hour,minute,second;;
    cin >> hour >> minute >> second;
    int diff_second;
    cin >> diff_second;

    Clock clock;

    clock.set(hour,minute,second);

    cout << clock.to_str() << endl;

    clock.shift(diff_second);

    cout << clock.to_str() << endl;

    return 0;
}