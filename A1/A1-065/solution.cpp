#include<bits/stdc++.h>
using namespace std;
string encode(int n){
    if(n==0)return "-";
    string res="";
    if(n/1000)res+="#";
    if((n/100)%10)res+="/";
    if((n/10)%10)res+="+";
    if(n%10)res+="*";
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<5;++i){
        int n;
        cin>>n;
        cout<<encode(n);
    }
    return 0;
}