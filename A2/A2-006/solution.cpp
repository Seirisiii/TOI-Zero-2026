#include<bits/stdc++.h>
using namespace std;
int n;
char arr[35][35];
bool visited[35][35];
int solve(int i,int j){
    if(i<=0 or i>n or j<=0 or j>n)return 0;
    if(arr[i][j]=='X')return 0;
    if(visited[i][j])return 0;
    visited[i][j]=true;
    return 1+solve(i-1,j)+solve(i,j-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cin>>arr[i][j];
        }
    }
    cout<<solve(n,n);
    return 0;
}