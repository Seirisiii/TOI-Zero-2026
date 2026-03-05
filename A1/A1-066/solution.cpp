#include<bits/stdc++.h>
using namespace std;
int x,y;
int cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x>>y;
    int res=0;
    while(x>0 and res<y){
        res+=x;
        x-=2;
        ++cnt;
    }
    if(res<y)cout<<-1;
    else cout<<cnt;
    return 0;
}