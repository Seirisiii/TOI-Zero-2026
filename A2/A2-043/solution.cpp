#include<bits/stdc++.h>
using namespace std;
int n;
int pos,treasure;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    vector<int> cave(n);
    for(int i=0;i<n;++i){
        cin>>cave[i];
        if(cave[i]==1)pos=i;
        if(cave[i]==2)treasure=i;
    }
    cin>>s;
    for(auto i:s){
        int np=pos+(i=='R'?1:-1);
        if(np<0 or np>=n)continue;
        cave[pos]=0;
        pos=np;
        if(pos==treasure){
            cave[pos]=1;
            break;
        }
        cave[pos]=1;
    }
    cave[treasure]=2;
    if(pos==treasure)cave[pos]=1;
    for(int i=0;i<n;++i){
        cout<<cave[i]<<" ";
    }
    return 0;
}