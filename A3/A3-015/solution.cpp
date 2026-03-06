#include<bits/stdc++.h>
using namespace std;
int n;
int sum;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    sort(v.begin(),v.end());
    for(auto i:v){
        sum+=i;
        res+=sum*2;
    }
    cout<<res;
    return 0;
}