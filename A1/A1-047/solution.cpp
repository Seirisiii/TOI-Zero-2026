//This solution scores 90/100.
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>a;
    ll m=n*a;
    if(m==0){
        cout<<"No teaching";
        return 0;
    }
    if(m/60)cout<<m/60<<" hours ";
    if(m%60)cout<<m%60<<" minutes";
    return 0;
}