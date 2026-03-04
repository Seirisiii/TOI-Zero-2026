#include<bits/stdc++.h>
using namespace std;
vector<int> v(3);
int cmd;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<3;++i){
        cin>>v[i];
        cout<<"Input number "<<i+1<<" stored.\n";
    }
    cin>>cmd;
    if(cmd==0)return 0;
    if(cmd==1)cout<<"Original order: ";
    else if(cmd==2){
        sort(v.begin(),v.end(),greater<int>());
        cout<<"Descending order: ";
    }
    else if(cmd==3){
        sort(v.begin(),v.end());
        cout<<"Ascending order: ";
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}