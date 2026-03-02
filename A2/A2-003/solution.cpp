#include<bits/stdc++.h>
using namespace std;
int n;
int arr[1005];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    for(int i=1;i<=n;++i){
        if(arr[i]>arr[i-1] and arr[i]>arr[i+1])++res;
    }
    cout<<res;
    return 0;
}