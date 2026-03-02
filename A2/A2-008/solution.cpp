#include<bits/stdc++.h>
using namespace std;
int n;
int p[200005];
int v[200005];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>p[i]>>v[i];
    }
    int prev=v[n-1];
    for(int i=n-2;i>=0;--i){
        if(v[i]<=prev)++res;
        else prev=v[i];
    }
    cout<<res;
    return 0;
}