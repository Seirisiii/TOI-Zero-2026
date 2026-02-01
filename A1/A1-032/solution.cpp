#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cout<<"*";
    }
    cout<<"\n";
    for(int i=0;i<n-2;++i){
        cout<<"*";
    }
    cout<<"\n";
    for(int i=0;i<n-4;++i){
        cout<<"*";
    }
    cout<<"\n";
    return 0;
}