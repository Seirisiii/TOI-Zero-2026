#include<bits/stdc++.h>
using namespace std;
int y,m1,d1,y2,m2,d2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>y>>m1>>d1>>y2>>m2>>d2;
    if(y<y2)cout<<1;
    else if(y>y2)cout<<2;
    else{
        if(m1<m2)cout<<1;
        else if(m1>m2)cout<<2;
        else{
            if(d1<d2)cout<<1;
            else if(d1>d2)cout<<2;
            else cout<<0;
        }
    }
    return 0;
}