#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n==0 or n==1)cout<<35;
    else if(n>=2 and n<=10)cout<<35+(n-1)*5;
    else if(n>10)cout<<80+(n-10)*8;
    else cout<<0;
    return 0;
}