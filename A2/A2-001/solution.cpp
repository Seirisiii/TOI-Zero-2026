#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[505];
int b[505];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (int i=1;i<=n;++i){
        cin>>a[i];
    }
    for (int i=1;i<=m;++i){
        cin>>b[i];
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(i%2==j%2){
                if((a[i]<b[j] and b[j+1]<a[i+1]) or (b[j]<a[i] and a[i+1]<b[j+1]))++res;
            }
            else{
                if((a[i]<b[j+1] and b[j]<a[i+1]) or (b[j]<a[i+1] and a[i]<b[j+1]))++res;
            }
        }
    }
    for(int i=0;i<=n;++i) {
        for(int j=i%2;j<=m;j+=2){
            if(a[i]==b[j])++res;
        }
    }
    cout<<res;
    return 0;
}