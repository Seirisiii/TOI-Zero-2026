#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    res+=a*25+b*40+c*55;
    if(a+b+c>=3)res=res*9/10;
    cout<<res;
    return 0;
}