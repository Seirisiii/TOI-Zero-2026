#include<bits/stdc++.h>
using namespace std;
int n,L;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>L;
    vector<pair<int,int>> v(n);
    for(auto &[a,b]:v)cin>>a>>b;
    sort(v.begin(),v.end());
    int cl=-1,cr=-1;
    for(auto [l,r]:v){
        if(l<=cr){
            cl=max(cl,l);
            cr=min(cr,r); 
        }
        else{
            ++res;
            cl=l;
            cr=r;
        }
    }
    cout<<res;
    return 0;
}