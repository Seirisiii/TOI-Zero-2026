#include<bits/stdc++.h>
using namespace std;
int n;
string M[4]={"","M","MM","MMM"};
string C[10]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
string X[10]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
string I[10]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cout<<M[n/1000]+C[(n%1000)/100]+X[(n%100)/10]+I[(n%10)];
    return 0;
}