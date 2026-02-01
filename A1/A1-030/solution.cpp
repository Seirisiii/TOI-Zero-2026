#include<bits/stdc++.h>
using namespace std;
int n;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n==1){
        int a,b;
        cin>>a>>b;
        if(a>b)cout<<a;
        else cout<<b;
    }
    else{
        for(int i=0;i<n;++i){
            int a,b;
            cin>>a>>b;
            if(a>b){
                cout<<a;
                if(i<n-1)cout<<" + ";
                res+=a;
            }
            else{
                cout<<b;
                if(i<n-1)cout<<" + ";
                res+=b;
            }
        }
        cout<<" = "<<res;
    }
    return 0;
}