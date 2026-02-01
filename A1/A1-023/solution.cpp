#include<bits/stdc++.h>
using namespace std;
int n;
char c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>c;
    if(c=='c' or c=='C'){
        if(n<=0)cout<<"solid";
        else if(n<100)cout<<"liquid";
        else cout<<"gas";
    }
    else if(c=='f' or c=='F'){
        if(n<=32)cout<<"solid";
        else if(n<212)cout<<"liquid";
        else cout<<"gas";
    }
    return 0;
}