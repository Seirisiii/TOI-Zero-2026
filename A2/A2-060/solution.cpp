#include<bits/stdc++.h>
using namespace std;
int n;
int mn_x=INT_MAX,mn_y=INT_MAX;
int mx_x,mx_y;
vector<tuple<int,int,int>> v;
bool solve(int X,int Y){
    for(auto [x,y,d]:v){
        if((x-X)*(x-X)+(y-Y)*(y-Y)!=d*d)return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    v.resize(n);
    for(auto &[x,y,d]:v){
        cin>>x>>y>>d;
        mn_x=min(mn_x,x);
        mn_y=min(mn_y,y);
        mx_x=max(mx_x,x);
        mx_y=max(mx_y,y);
    }
    for(int x=mn_x;x<=mx_x;++x){
        for(int y=mn_y;y<=mx_y;++y){
            if(solve(x,y)){
                cout<<x<<" "<<y;
                return 0;
            }
        }
    }
    return 0;
}