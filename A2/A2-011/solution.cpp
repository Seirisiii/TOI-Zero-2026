#include<bits/stdc++.h>
using namespace std;
map<int,bool> visited;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<10;++i){
        int x;
        cin>>x;
        if(!visited[x])cout<<x<<" ";
        visited[x]=true;
    }
    return 0;
}