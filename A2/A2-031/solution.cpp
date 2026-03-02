#include<bits/stdc++.h>
using namespace std;
int l,n;
int res;
char dna[2][1000005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>l;
    for(int i=0;i<l;++i){
        cin>>dna[0][i];
    }
    for(int i=0;i<l;++i){
        cin>>dna[1][i];
    }
    cin>>n;
    while(n--){
        int a,b;
        char c;
        cin>>a>>b>>c;
        dna[a-1][b]=c;
    }
    for(int i=0;i<l;++i){
        if(dna[0][i]=='A' and dna[1][i]=='T')++res;
        else if(dna[0][i]=='T' and dna[1][i]=='A')++res;
        else if(dna[0][i]=='G' and dna[1][i]=='C')++res;
        else if(dna[0][i]=='C' and dna[1][i]=='G')++res;
    }
    for(int i=0;i<l;++i){
        cout<<dna[0][i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<l;++i){
        cout<<dna[1][i]<<" ";
    }
    cout<<"\n";
    cout<<l-res;
    return 0;
}