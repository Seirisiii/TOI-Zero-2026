#include<bits/stdc++.h>
using namespace std;
int n;
char c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>c;
    if(n<18 or c=='s' or c=='S')cout<<20;
    else cout<<50;
    return 0;
}