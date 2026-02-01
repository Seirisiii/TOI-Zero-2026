#include<bits/stdc++.h>
using namespace std;
int n;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        char c;
        cin>>c;
        if(c=='A' or c=='E' or c=='I' or c=='O' or c=='U')++res;
    }
    cout<<res;
    return 0;
}