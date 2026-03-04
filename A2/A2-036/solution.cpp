#include<bits/stdc++.h>
using namespace std;
int num,query;
int diff[1445],pre[1445];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>num>>query;
    for(int i=0;i<num;++i){
        int s,e;
        cin>>s>>e;
        ++diff[s];
        --diff[e+1];
    }
    for(int i=0;i<=1440;++i){
        pre[i]=(i?pre[i-1]:0)+diff[i];
    }
    for(int i=0;i<query;++i){
        int k;
        cin>>k;
        cout<<pre[k]<<" ";
    }
    return 0;
}