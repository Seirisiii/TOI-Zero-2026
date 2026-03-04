#include<bits/stdc++.h>
using namespace std;
int n,cnt;
vector<string> v;
void perm(int idx){
    if(idx==n){
        for(int i=0;i<n;++i){
            cout<<v[i]<<" "; 
        }
        cout<<"\n";
        cnt++;
        return;
    }
    for(int i=idx;i<n;++i){
        swap(v[idx],v[i]);
        perm(idx+1);
        swap(v[idx],v[i]);
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    v.resize(n);
    for(auto &i:v)cin>>i;
    perm(0);
    cout<<cnt;
    return 0;
}