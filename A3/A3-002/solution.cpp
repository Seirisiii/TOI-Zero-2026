
#include<bits/stdc++.h>
using namespace std;
int n;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int sq=sqrt(n);
    if(sq*sq==n)--sq;
    if(sq%2==0){
        if(n%2==0)res=sq*2-1;
        else res=sq*2;
    }
    else{
        if(n%2==0)res=sq*2;
        else res=sq*2-1;
    }
    cout<<res;
    return 0;
}
