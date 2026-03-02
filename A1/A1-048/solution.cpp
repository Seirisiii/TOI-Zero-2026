#include<bits/stdc++.h>
using namespace std;
int n;
double res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n<=10)res=n*5;
    else if(n<=50)res=(n-10)*7+50;
    else if(n<=100)res=(n-50)*10+330;
    else if(n<=200)res=(n-100)*12+830;
    else res=(n-200)*15+2030;
    res+=0.07*res+0.5*n;
    cout<<fixed<<setprecision(2)<<res;
    return 0;
}