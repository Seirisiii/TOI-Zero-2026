#include<bits/stdc++.h>
using namespace std;
char a,b,c;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    if(a=='a' or a=='e' or a=='i' or a=='o' or a=='u')++res;
    if(b=='a' or b=='e' or b=='i' or b=='o' or b=='u')++res;
    if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u')++res;
    cout<<res;
    return 0;
}