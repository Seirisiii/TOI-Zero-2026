#include<bits/stdc++.h>
using namespace std;
char c;
int n;
string s[3]={"Red","Green","Blue"};
int idx;
int main(){
    cin>>c>>n;
    if(c=='R')idx=0;
    else if(c=='G')idx=1;
    else if(c=='B')idx=2;
    while(n--){
        cout<<s[idx]<<" ";
        ++idx;
        idx%=3;
    }
    return 0;
}