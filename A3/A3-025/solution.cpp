#include<bits/stdc++.h>
using namespace std;
int n,w,l;
int res[100005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>w>>l;
    for(int i=0;i<n;++i){
        int k;
        cin>>k;
        bool visited[100005]={};
        for(int j=0;j<k;++j){
            int x;
            cin>>x;
            int s=max(1,x-l);
            int e=min(w,x+l);
            for(int a=s;a<=e;++a){
                if(visited[a])continue;
                visited[a]=true;
                ++res[a];
            }
        }
    }
    for(int i=1;i<=w;++i){
        if(res[i]==n){
            cout<<1;
            return 0;
        }
    }
    cout<<0;
    return 0;
}