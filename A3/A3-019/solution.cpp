#include<bits/stdc++.h>
using namespace std;
int n,l;
int h[100005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>l;
    for(int i=1;i<=n;++i){
        cin>>h[i];
    }
    while(l--){
        int a;
        cin>>a;
        int mx=0;
        for(int i=1;i<a;++i){
            mx=max(mx,h[i]);
        }
        cout<<max(0,mx-h[a]+1)<<"\n";
    }
    return 0;
}