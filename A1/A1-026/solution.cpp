#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    if(a%2)++res;
    if(b%2)++res;
    if(c%2)++res;
    cout<<"even "<<3-res<<"\nodd "<<res;
    return 0;
}