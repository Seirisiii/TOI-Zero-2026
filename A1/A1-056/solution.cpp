#include<bits/stdc++.h>
using namespace std;
double X1,Y1,Z1;
double X2,Y2,Z2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>X1>>Y1>>Z1;
    cin>>X2>>Y2>>Z2;
    double res=sqrt((X1-X2)*(X1-X2)+(Y1-Y2)*(Y1-Y2)+(Z1-Z2)*(Z1-Z2));
    cout<<fixed<<setprecision(2)<<res;
    return 0;
}