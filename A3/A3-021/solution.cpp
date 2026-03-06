#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,k;
int mn=INT_MAX;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    vector<int> v(n);
    for(auto &i:v){
        cin>>i;
        mn=min(mn,i);
    }
    ll res=0;
    for(auto i:v){
        if(1LL*(k-1)*(i-mn)<mn)++res;
    }
    cout<<res;
    return 0;
}