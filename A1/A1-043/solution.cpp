#include<bits/stdc++.h>
using namespace std;
int x,y,d;
int point;
int rnk;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x>>y>>d;
    point=(x+y)*(d>3?1.5:1);
    cout<<point<<"\n";
    if(point>=1500)rnk=5;
    else if(point>=1000)rnk=4;
    else if(point>=500)rnk=3;
    else if(point>=200)rnk=2;
    else rnk=1;
    cout<<rnk<<"\n";
    if(rnk==5 and d>=7)cout<<99<<"\n";
    else if(rnk==4 and point>300)cout<<88<<"\n";
    else cout<<0<<"\n";
    return 0;
}