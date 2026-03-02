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
        }
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(a[i][j]=='-')cout<<b[i][j];
            else{
                if(b[i][j]=='-')cout<<a[i][j];
                else cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}