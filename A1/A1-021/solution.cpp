#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n==1500)cout<<"yes";
    else if(n%4==0 and n%100==0 and n%400==0)cout<<"yes";
    else if(n%4==0 and n%100==0)cout<<"no";
    else if(n%4==0)cout<<"yes";
    else cout<<"no";
    return 0;
}