#include<bits/stdc++.h>
using namespace std;
int n;
int h[1001];
int sum;
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    h[1]=1;
    for(int i=1;i<=n;++i){
        int a,l,b,r;
        cin>>a>>l>>b>>r;
        if(a==0)h[l]=h[i]+1;
        else{
            sum+=l;
            mx=max(mx,l*(1<<h[i]));
        }
        if(b==0)h[r]=h[i]+1;
        else{
            sum+=r;
            mx=max(mx,r*(1<<h[i]));
        }
    }
    cout<<mx-sum;
    return 0 ;
}