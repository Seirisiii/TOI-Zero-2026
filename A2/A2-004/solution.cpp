#include<bits/stdc++.h>
using namespace std;
int n;
int cnt[305];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        int x;
        cin>>x;
        ++cnt[x];
        res=max(res,cnt[x]);
    }
    cout<<res;
    return 0;
}