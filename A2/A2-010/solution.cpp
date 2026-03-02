#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,q;
int depth,cx;
int pre[N],mx[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>q;
    mx[0]=INT_MAX;
    for(int i=0;i<n;++i){
        int d,x;
        cin>>d>>x;
        depth+=d;
        if(d==1)pre[depth]=cx;
        cx+=x;
        mx[depth]=max(mx[depth],cx-pre[depth]);
    }
    while(q--){
        int x;
        cin>>x;
        int l=0,r=n,ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(mx[mid]>=x){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}