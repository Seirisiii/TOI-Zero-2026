#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cout<<"10 = "<<n/10<<"\n";
    cout<<"5 = "<<n%10/5<<"\n";
    cout<<"2 = "<<n%10%5/2<<"\n";
    cout<<"1 = "<<n%10%5%2<<"\n";
    return 0;
}