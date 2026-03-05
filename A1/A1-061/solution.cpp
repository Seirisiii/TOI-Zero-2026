#include<bits/stdc++.h>
using namespace std;
int r,x,y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>r>>x>>y;
    if(r*r>x*x+y*y)cout<<"IN";
    else if(r*r<x*x+y*y)cout<<"OUT";
    else cout<<"ON";
    return 0;
}