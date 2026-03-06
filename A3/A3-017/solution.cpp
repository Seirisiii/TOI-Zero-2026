#include<bits/stdc++.h>
using namespace std;
int n,m,l,r;
int res=INT_MAX;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n>>l>>r;
    for(int i=l;i<=min({n,m,r});++i){
        res=min(res,(m%i)*(n%i));
    }
    if(res==INT_MAX)res=0;
    cout<<res;
    return 0;
}