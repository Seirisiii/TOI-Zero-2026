#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
unordered_map<ll,ll> uma;
unordered_map<ll,ll> umb;
ll res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    vector<pair<ll,ll>> v(n);
    for(auto &[a,b]:v)cin>>a>>b;
    sort(v.begin(),v.end());
    for(auto [a,b]:v){
        if(uma.find(a+b)!=uma.end()){
            res=max(res,a-uma[a+b]);
            uma[a+b]=min(uma[a+b],a);
        }
        else uma[a+b]=a;
        if(umb.find(a-b)!=umb.end()){
            res=max(res,a-umb[a-b]);
            umb[a-b]=min(umb[a-b],a);
        }
        else umb[a-b]=a;
    }
    cout<<res;
    return 0;
}