#include<bits/stdc++.h>
using namespace std;
int w,h,m,n;
int x[1005];
int y[1005];
int cx[1005];
int cy[1005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>w>>h>>m>>n;
    for(int i=1;i<=m;++i){
        cin>>x[i];
    }
    x[m+1]=w;
    for(int i=1;i<=n;++i){
        cin>>y[i];
    }
    y[n+1]=h;
    for(int i=0;i<=m;++i){
        cx[i]=x[i+1]-x[i];
    }
    for(int i=0;i<=n;++i){
        cy[i]=y[i+1]-y[i];
    }
    sort(cx,cx+m+1);
    sort(cy,cy+n+1);
    cout<<cx[m]*cy[n]<<" "<<max(cx[m-1]*cy[n],cy[n-1]*cx[m]);
    return 0;
}