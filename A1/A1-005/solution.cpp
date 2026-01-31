#include<bits/stdc++.h>
using namespace std;
int m,d;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>d;
    if(m==1 || m==2)cout<<"winter";
    else if(m==3){
        if(d>=21)cout<<"spring";
        else cout<<"winter";
    }
    else if(m==4 || m==5)cout<<"spring";
    else if(m==6){
        if(d>=21)cout<<"summer";
        else cout<<"spring";
    }
    else if(m==7 || m==8)cout<<"summer";
    else if(m==9){
        if(d>=21)cout<<"fall";
        else cout<<"summer";
    }
    else if(m==10 || m==11)cout<<"fall";
    else if(m==12){
        if(d>=21)cout<<"winter";
        else cout<<"fall";
    }
    return 0;
}