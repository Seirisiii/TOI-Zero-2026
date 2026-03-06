#include<bits/stdc++.h>
using namespace std;
int n,k,t;
bool visited[200005];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k>>t;
    int now=1;
    while(!visited[now]){
        visited[now]=true;
        ++res;
        if(now==t)break;
        now+=k;
        now%=n;
        if(now==0)now=n;
    }
    cout<<res;
    return 0;
}