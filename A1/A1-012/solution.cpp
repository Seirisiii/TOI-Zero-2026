#include<bits/stdc++.h>
using namespace std;
int a;
char op;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a;
    cin>>op;
    int b=10*(a%10)+a/10;
    if(op=='+')cout<<a<<" + "<<b<<" = "<<a+b;
    else if(op=='*')cout<<a<<" * "<<b<<" = "<<a*b;
    return 0;
}