#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        if(i==0 or i==n-1){
            for(int j=0;j<=i;++j){
                cout<<"0 ";
            }
        }
        else{
            for(int j=0;j<=i;++j){
                if(j==0 or j==i)cout<<"0 ";
                else cout<<"1 ";
            }
        }
        cout<<"\n"; 
    }
    return 0;
}