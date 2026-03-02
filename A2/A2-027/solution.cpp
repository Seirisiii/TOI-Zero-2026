#include<bits/stdc++.h>
using namespace std;
int n;
int res;
int mx=INT_MIN;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int p;
        cin>>p;
        if(p>mx){
            mx=p;
            res=1;
        }
        else if(p==mx)++res;
    }
    cout<<mx<<"\n"<<res;
    return 0;
}