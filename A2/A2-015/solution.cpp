#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c>>x;
    cout<<(a+b+a+b)*c<<"\n"<<(a+b+a+b)*c*x;
    return 0;
}