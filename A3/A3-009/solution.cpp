#include<bits/stdc++.h>
using namespace std;
int n,k;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    vector<int> v(k,0);
    while(n--){
        int x;
        cin>>x;
        ++v[x-1];
    }
    int mn=*min_element(v.begin(),v.end());
    for(auto i:v){
        res+=i-mn;
    }
    cout<<res;
    return 0;
}