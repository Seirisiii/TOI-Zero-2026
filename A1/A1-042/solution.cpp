#include<bits/stdc++.h>
using namespace std;
string s;
int x,y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for(auto i:s){
        if(i=='N')++y;
        else if(i=='S')--y;
        else if(i=='E')++x;
        else if(i=='W')--x;
    }
    cout<<x<<" "<<y<<" "<<abs(x)+abs(y);
    return 0;
}