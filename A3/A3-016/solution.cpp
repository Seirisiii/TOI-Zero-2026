#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[100005];
int cnt[100005],target[100005];
bool visited[100005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int k;
        cin>>k;
        cnt[i]=k;
        for(int j=0;j<k;++j){
            int s;
            cin>>s;
            adj[s].emplace_back(i);
        }
        cin>>target[i];
    }
    queue<int> q;
    visited[1]=true;
    q.push(1);
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(auto i:adj[cur]){
            --cnt[i];
            if(cnt[i]==0 and !visited[target[i]]){
                visited[target[i]]=true;
                q.push(target[i]);
            }
        }
    }
    int res=0;
    for(int i=1;i<=n;++i){
        if(visited[i])++res;
    }
    cout<<res;
    return 0;
}