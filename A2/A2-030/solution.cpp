#include<bits/stdc++.h>
using namespace std;
int arr[5][5];
int I=-1;
int J=-1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<5;++i){
        int res=0;
        for(int j=0;j<5;++j){
            cin>>arr[i][j];
            res+=arr[i][j];
        }
        if(res%2)I=i;
    }
    for(int j=0;j<5;++j){
        int res=0;
        for(int i=0;i<5;++i){
            res+=arr[i][j];
        }
        if(res%2)J=j;
    }
    cout<<I<<" "<<J;
    return 0;
}