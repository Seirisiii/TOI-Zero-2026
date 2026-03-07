#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll MOD=(1<<15)+9;
ll matrix1[3][3];
ll matrix2[3][3];
ll res[3][3];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cin>>matrix1[i][j];
        }
    }
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cin>>matrix2[i][j];
        }
    }
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            for(int k=0;k<3;++k){
                res[i][j]+=(matrix1[i][k]*matrix2[k][j])%MOD;
                res[i][j]%=MOD;
            }  
        }
    }
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}