#include<bits/stdc++.h>
using namespace std;
char a,b,c;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    if(a=='S'){
        if(b=='R')res=60;
        else if(b=='T')res=80;
    }
    else if(a=='M'){
        if(b=='R')res=80;
        else if(b=='T')res=100;
    }
    else if(a=='L'){
        if(b=='R')res=100;
        else if(b=='T')res=120;
    }
    cin>>c;
    if(c=='P'){
        int x;
        cin>>x;
        res+=15*x;
    }
    else if(c=='E'){
        int x;
        cin>>x;
        res+=10*x;
    }
    cout<<res;
    return 0;
}