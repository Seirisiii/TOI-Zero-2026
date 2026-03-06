#include<bits/stdc++.h>
using namespace std;
int l,n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>l>>n;
    int sum=0,i=0;
    while(sum<n){
        ++i;
        sum+=i*i;
    }
    int res=l-i;
    if(sum>n)++res;
    cout<<res;
    return 0;
}