#include<bits/stdc++.h>
using namespace std;
int n;
int arr[100][100];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            int x;
            cin>>x;
            cout<<arr[i][j]+x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}