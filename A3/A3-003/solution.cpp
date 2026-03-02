#include<bits/stdc++.h>
using namespace std;
int n;
int a[305];
int b[305];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    a[0]=1;
    b[0]=1;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    for(int i=1;i<=n;++i){
        cin>>b[i];
    }
    for(int i=1;i<=n;++i){
        int ua=min(a[i-1],a[i]);
        int va=max(a[i-1],a[i]);
        int ub=min(b[i-1],b[i]);
        int vb=max(b[i-1],b[i]);
        if(ua==ub and va==vb)++res;
        else if((ua<ub and va<vb and va>ub) or (ua>ub and va>vb and vb>ua))++res;
    }
    cout<<res;
    return 0;
}