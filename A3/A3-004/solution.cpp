#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
ll res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    vector<ll> u(n);
    vector<ll> v(n);
    for(int i=0;i<n;++i){
        ll x,y;
        cin>>x>>y;
        u[i]=x+y;
        v[i]=x-y;
    }
    sort(u.begin(),u.end());
    sort(v.begin(),v.end());
    ll mu=u[n/2],mv=v[n/2];
    for(int i=0;i<n;++i){
        res+=abs(u[i]-mu)+abs(v[i]-mv);
    }
    cout<<res<<"\n";
    return 0;
}