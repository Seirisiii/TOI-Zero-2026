#include<bits/stdc++.h>
using namespace std;
int n;
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    vector<int> v(n);
    for(auto &i:v){
        cin>>i;
        i--;
    }
    vector<bool> visited(n);
    for(int i=0;i<n;++i){
        if(visited[i])continue ;
        int u=i,cnt=0;
        do{
            u=v[u];
            ++cnt;
            visited[u]=true;
        }while(u!=i);
        mx=max(mx,cnt);
    }
    cout<<mx;
    return 0;
}