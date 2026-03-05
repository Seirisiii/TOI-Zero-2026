#include<bits/stdc++.h>
using namespace std;
using ll=long long;
char c;
ll a,s;
double res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>c>>a>>s;
    if(c=='M' or c=='m'){
        res=1500;
        if(a<5)res+=s*0.06;
        else if(a>=5 and a<=10)res+=s*0.08;
        else if(a>10)res+=s*0.1;
    }
    else if(c=='B' or c=='b'){
        res=1000;
        if(a<5)res+=s*0.05;
        else if(a>=5 and a<=10)res+=s*0.06;
        else if(a>10)res+=s*0.07;
    }
    else if(c=='G' or c=='g'){
        res=500;
        if(a<5)res+=s*0.04;
        else if(a>=5 and a<=10)res+=s*0.05;
        else if(a>10)res+=s*0.06;
    }
    cout<<fixed<<setprecision(0)<<res;
    return 0;
}