#include<bits/stdc++.h>
using namespace std;
int s,e;
int cnt;
bool is_prime(int n){
    for(int i=2;i*i<=n;++i){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s>>e;
    for(int i=s;i<=e;++i){
        if(is_prime(i)){
            cout<<i<<" ";
            ++cnt;
        }
    }
    cout<<"\nTotal primes: "<<cnt;
    return 0;
}