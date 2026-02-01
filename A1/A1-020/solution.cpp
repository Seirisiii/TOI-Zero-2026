#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    if(a<b and b<c)cout<<"increasing";
    else if(a>b and b>c)cout<<"decreasing";
    else cout<<"neither";
    return 0;
}