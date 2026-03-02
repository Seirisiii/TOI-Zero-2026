#include<bits/stdc++.h>
using namespace std;
int l,n;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>l>>n;
    while(n>0){
        ++res;
        n-=(res*l*l)-((l-1)*l/2);
    }
    cout<<res;
    return 0;
}