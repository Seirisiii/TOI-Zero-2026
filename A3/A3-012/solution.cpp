#include<bits/stdc++.h>
using namespace std;
int n,s;
int nxt[1005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for(int i=1;i<=n;++i){
        cin>>nxt[i];
    }
    set<int> visited;
    int cur=s;
    while(cur!=0 and visited.find(cur)==visited.end()){
        visited.insert(cur);
        cur=nxt[cur];
    }
    cout<<(int)visited.size();
    return 0;
}