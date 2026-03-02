#include<bits/stdc++.h>
using namespace std;
int l,p;
int r,m,f;
int pr,pm,pf;
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>l>>p>>r>>m>>f;
    while(p--){
        int x,y;
        cin>>x>>y;
        if(x%r==0)pr+=y;
        if(x%m==0)pm+=y;
        if(x%f==0)pf+=y;
        mx=max({pr,pm,pf});
    }
    if(pr==mx)cout<<"Rabbit "<<pr<<"\n";
    if(pm==mx)cout<<"Monkey "<<pm<<"\n";
    if(pf==mx)cout<<"Frog "<<pf<<"\n";
    return 0;
}