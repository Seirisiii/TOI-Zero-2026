#include<bits/stdc++.h>
using namespace std;
char c;
int n;
char s;
int a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>c>>n>>s>>a;
    if(c==s and n==a)cout<<"1000000";
    else if(c!=s and n==a)cout<<"100000";
    else if(c==s and n%1000==a%1000)cout<<"2000";
    else if(c==s and n%100==a%100)cout<<"1000";
    else if(c!=s and n%1000==a%1000)cout<<"200";
    else if(c!=s and n%100==a%100)cout<<"100";
    else if(c==s and n!=a)cout<<"20";
    else cout<<"0";
    return 0;
}