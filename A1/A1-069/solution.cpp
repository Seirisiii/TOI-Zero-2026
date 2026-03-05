#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(i>=(n+1)/2)cout<<"K ";
            else cout<<"A ";
        }
        cout<<"\n";
    }
    return 0;
}