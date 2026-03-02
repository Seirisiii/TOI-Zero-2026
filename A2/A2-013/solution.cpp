#include<bits/stdc++.h>
using namespace std;
char a,b;
int x,y,z;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>x>>b>>y>>z;
    if(a=='H')res+=5*x;
    else if(a=='O')res+=3*x;
    else if(a=='J')res+=2*x;
    if(b=='R'){
        if(y==1)res+=12*z;
        else if(y==2)res+=18*z;
        else if(y==3)res+=25*z;
    }
    else if(b=='T'){
        if(y==1)res+=15*z;
        else if(y==2)res+=20*z;
        else if(y==3)res+=30*z;
    }
    else if(b=='M'){
        if(y==1)res+=10*z;
        else if(y==2)res+=15*z;
        else if(y==3)res+=20*z;
    }
    cout<<res;
    return 0;
}