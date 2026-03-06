#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int a,b;
ll res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    vector<bool> noprime(b*3);
    for(int i=2;i<b*3;++i){
        if(noprime[i])continue;
        if(i>a*3){
            for(int j=a;j<=b;++j){
                int BC=i-j;
                int x=max(j,BC-b); 
                int y=min(b,BC-j);
                if(y<x)continue;
                res+=(y-x+2)/2;
            }
        }
        for(int j=i*i;j<b*3;j+=i){
            noprime[j]=true;
        }
    }
    cout<<res;
    return 0;
}