#include<bits/stdc++.h>
using namespace std;
int n;
int c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>c;
    if(n<=1990){
        if(c<=1500)cout<<"1250";
        else if(c<=2000)cout<<"1400";
        else cout<<"2000";
    }
    else if(n<2000){
        if(c<=1500)cout<<"1100";
        else if(c<=2000)cout<<"1300";
        else cout<<"1700";
    }
    else{
        if(c<=1500)cout<<"1000";
        else if(c<=2000)cout<<"1200";
        else cout<<"1500";
    }
    return 0;
}