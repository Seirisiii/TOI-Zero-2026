#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    n-=n%10;
    for(int i=n;i>=0;i-=10){
        cout<<i<<" ";
    }
    return 0;
}