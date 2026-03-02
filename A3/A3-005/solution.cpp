#include<bits/stdc++.h>
using namespace std;
int n,m;
int prefix[1000005];
int res;
int main(){
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int s,t;
        cin>>s>>t;
        ++prefix[s];
        --prefix[t+1];
    }
    for(int i=1;i<=n;++i){
        prefix[i]+=prefix[i-1];
        res=max(prefix[i],res);
    }
    cout<<res;
    return 0;
}