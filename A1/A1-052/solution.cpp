#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n<100 or n>20000 or n%100!=0){
        cout<<"ERROR";
        return 0;
    }
    int a=n/1000;
    int b=(n%1000)/500;
    int c=(n%500)/100;
    if(a)cout<<"1000 = "<<a<<"\n";
    if(b)cout<<"500 = "<<b<<"\n";
    if(c)cout<<"100 = "<<c<<"\n";
    return 0;
}