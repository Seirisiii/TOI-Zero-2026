#include<bits/stdc++.h>
using namespace std;
char c;
int n;
double sum;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>c>>n;
    while(n--){
        double x;
        cin>>x;
        sum+=x;
    }
    if(c=='Y')sum*=0.95;
    else if(c=='N'){
        if(sum>=500)sum*=0.97;
    }
    cout<<fixed<<setprecision(2)<<sum;
    return 0;
}