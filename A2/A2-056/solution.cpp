#include<bits/stdc++.h>
using namespace std;
int n;
map<int,int> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        ++mp[x];
    }
    bool check=false;
    for(auto i:mp){
        if(i.second==1){
            cout<<i.first<<" ";
            check=true;
        }
    }
    if(!check)cout<<-1;
    return 0;
}