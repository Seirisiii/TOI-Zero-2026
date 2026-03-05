#include<bits/stdc++.h>
using namespace std;
int g,r;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>g>>r;
    if(g<1 or g>6 or r<1 or r>6)cout<<"Invalid";
    else if(g==r)cout<<"Correct!";
    else cout<<"Wrong!";
    return 0;
}