#include<bits/stdc++.h>
using namespace std;
double r,h,g;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>r>>h>>g;
    cout<<fixed<<setprecision(2)<<h+2*r<<" "<<6.28*r+g;
    return 0;
}