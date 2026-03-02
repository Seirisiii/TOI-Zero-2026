#include<bits/stdc++.h>
using namespace std;
string s;
int u,mxu;
bool check,hasb;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    string z=s;
    for(auto &i:s)i=tolower(i); 
    int n=s.length();
    string b="buu";
    for(int i=0;i<n;++i) {
        if(check){
            if(s[i]=='u'){
                ++u;
                mxu=max(mxu,u);
            }
            else check=0;
        }
        if(i<n-2 and s.substr(i, 3)==b){
            check=true;
            u=false;
        }
        if(s[i]=='b')hasb=true;
    }
    if(mxu>0){
        cout<<"Yes "<<mxu;
        return 0;
    }
    if(hasb){
        check=false;
        for(char i:z){
            if(check)cout<<"U";
            else cout<<i;
            if(tolower(i)=='b')check=true;
        }
    }
    else{
        for(int i=0;i<n;++i){
            cout<<(char)toupper(b[i%3]);
        }
    }
    return 0;
}