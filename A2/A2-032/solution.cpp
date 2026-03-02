#include<bits/stdc++.h>
using namespace std;
int r,c;
int n;
int arr[1005][1005];
int di[8]={-1,-1,-1,0,1,1,1,0};
int dj[8]={-1,0,1,1,1,0,-1,-1};
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>r>>c;
    cin>>n;
    while(n--){
        int i,j;
        cin>>i>>j;
        ++arr[i][j];
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(arr[i][j]>0)continue;
            int sum=0;
            for(int k=0;k<8;++k){
                int ni=i+di[k];
                int nj=j+dj[k];
                if(ni<0 or ni>=r or nj<0 or nj>=c)continue;
                sum+=arr[ni][nj];
            }
            mx=max(mx,sum);
        }
    }
    cout<<mx;
    return 0;
}