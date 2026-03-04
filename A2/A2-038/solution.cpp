#include<bits/stdc++.h>
using namespace std;
int n;
int totF,totW,totE;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int f1,w1,e1,f2,w2,e2;
        cin>>f1>>w1>>e1>>f2>>w2>>e2;
        if(f1>=f2)totF+=f1;
        else totF+=f2;
        if(w1>=w2)totW+=w1;
        else totW+=w2;
        if(e1>=e2)totE+=e1;
        else totE+=e2;
    }
    cout<<totF+totW+totE<<"\n"<<totF<<" "<<totW<<" "<<totE<<"\n"<<(totF>totW+totE?"YES":"NO");
    return 0;
}