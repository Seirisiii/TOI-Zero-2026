#include<bits/stdc++.h>
using namespace std;
int n,k;
int visited[100005];
int cnt;
queue<pair<int,int>> q;
long long res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    int l=0;
    for(int i=0;i<n;++i){
        int c;
        cin>>c;
        if(visited[c]==0)++cnt;
        ++visited[c];
        q.emplace(c,i);
        bool pass=false;
        int r=i;
        while(cnt>=k){
            pass=true;
            auto [a,idx]=q.front();
            q.pop();
            --visited[a];
            if(visited[a]==0)--cnt;
            r=idx;
        }
        if(r<l or !pass)continue;
        res+=(r-l+1)*(n-i);
        l=r+1;
    }
    cout<<res;
    return 0;
}