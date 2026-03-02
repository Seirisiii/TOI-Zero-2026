#include<bits/stdc++.h>
using namespace std;
int r,c;
int a,b;
int n;
int dx1[8]={-1,-1,-1,0,1,1,1,0};
int dy1[8]={-1,0,1,1,1,0,-1,-1};
int dx2[16]={-2,-2,-2,-2,-2,-1,0,1,2,2,2,2,2,1,0,-1};
int dy2[16]={-2,-1,0,1,2,2,2,2,2,1,0,-1,-2,-2,-2,-2};
int cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>r>>c>>a>>b>>n;
    int arr[r+5][c+5]={};
    while(n--){
        int x,y;
        cin>>x>>y;
        arr[x][y]=100;
        for(int i=0;i<8;++i){
            int nx=x+dx1[i];
            int ny=y+dy1[i];
            if(nx<0 or nx>=r or ny<0 or ny>=c)continue;
            arr[nx][ny]=max(arr[nx][ny],60);
        }
        for(int i=0;i<16;++i){
            int nx=x+dx2[i];
            int ny=y+dy2[i];
            if(nx<0 or nx>=r or ny<0 or ny>=c)continue;
            arr[nx][ny]=max(arr[nx][ny],20);
        }
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(arr[i][j]==0)++cnt;
        }
    }
    cout<<cnt<<"\n"<<arr[a][b]<<"%";
    return 0;
}