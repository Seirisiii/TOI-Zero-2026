#include<bits/stdc++.h>
using namespace std;
int r1,g1,b1;
int r2,g2,b2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>r1>>g1>>b1;
    cin>>r2>>g2>>b2;
    cout<<(r1+r2)/2<<" "<<(g1+g2)/2<<" "<<(b1+b2)/2;
    return 0;
}