#include<bits/stdc++.h>
using namespace std;
int n,c;
int arr[35][35];
queue<int> q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>c; 
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;++i){
        q.push(i);
    }
    while(q.size()>1){
        int u=q.front();
        q.pop();
        int v=q.front();
        q.pop();
        int w=arr[u][v];
        if(w==u and c==v){
            c=0;
            w=v;
        }
        if(w==v and c==u){
            c=0;
            w=u;
        }
        q.push(w);
    }
    cout<<q.front();
    return 0;
}