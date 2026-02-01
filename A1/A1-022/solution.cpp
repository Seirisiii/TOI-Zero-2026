#include<bits/stdc++.h>
using namespace std;
int d,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>d>>m;
    if(m==1){
        if(d<=19)cout<<"capricorn";
        else cout<<"aquarius";
    }
    else if(m==2){
        if(d<=18)cout<<"aquarius";
        else cout<<"pisces";
    }
    else if(m==3){
        if(d<=20)cout<<"pisces";
        else cout<<"aries";
    }
    else if(m==4){
        if(d<=19)cout<<"aries";
        else cout<<"taurus";
    }
    else if(m==5){
        if(d<=20)cout<<"taurus";
        else cout<<"gemini";
    }
    else if(m==6){
        if(d<=21)cout<<"gemini";
        else cout<<"cancer";
    }
    else if(m==7){
        if(d<=22)cout<<"cancer";
        else cout<<"leo";
    }
    else if(m==8){
        if(d<=22)cout<<"leo";
        else cout<<"virgo";
    }
    else if(m==9){
        if(d<=22)cout<<"virgo";
        else cout<<"libra";
    }
    else if(m==10){
        if(d<=23)cout<<"libra";
        else cout<<"scorpio";
    }
    else if(m==11){
        if(d<=21)cout<<"scorpio";
        else cout<<"sagittarius";
    }
    else if(m==12){
        if(d<=21)cout<<"sagittarius";
        else cout<<"capricorn";
    }
    return 0;
}