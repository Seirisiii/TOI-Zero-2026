#include<bits/stdc++.h>
using namespace std;
int n;
bool isPrime(int n){
    if(n<2)return false;
    for(int i=2;i*i<=n;++i){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n<0 or n>32768 or !isPrime(n)){
        cout<<"No";
        return 0;
    }
    cout<<"Yes\n";
    for(int i=2;i<=n;++i){
        if(isPrime(i))cout<<i<<" ";
    }
    return 0;
}