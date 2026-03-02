#include<bits/stdc++.h>
using namespace std;
int r,c;
char a[1005][1005];
char b[1005][1005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>r>>c;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    for(int i=0;i<r-1;++i){
        for(int j=0;j<c;++j){
            if(a[i][j]=='*')b[i+1][j]='*';
        }
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}