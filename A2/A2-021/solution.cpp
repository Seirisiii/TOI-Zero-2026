#include<bits/stdc++.h>
using namespace std;
int n,k;
int res=INT_MAX;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    vector<int> a(n),b(n),c(n),d(n);
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;
    for(auto &i:c)cin>>i;
    for(auto &i:d)cin>>i;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());
    for(int i=0;i<=k;++i){
        if(i>n or k-i>n)continue;
        int mx=0;
        for(int j=0;j<i;++j){
            mx=max(mx,a[j]+c[i-j-1]);
        }
        for(int j=0;j<k-i;++j){
            mx=max(mx,b[j]+d[k-i-j-1]);
        }
        res=min(res,mx);
    }
    cout<<res;
    return 0;
}