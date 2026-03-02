#include<bits/stdc++.h>
using namespace std;
int n;
int res;
string s;
int mx=INT_MIN;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        string str;
        int w;
        cin>>str>>w;
        if(w>15)++res;
        if(w>mx){
            mx=w;
            s=str;
        }
    }
    cout<<res<<"\n"<<s<<" "<<mx;
    return 0;
}