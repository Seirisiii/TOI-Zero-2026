#include<bits/stdc++.h>
using namespace std;
string s;
bool check=true,ok=true;
int a,mxa;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    int n=s.length();
    for(char &i:s){
        i=tolower(i);
        i=(i=='i' or i=='t'?'x':i);
    }
    for(int i=0;i<n;++i){
        char c=s[i];
        if(c!='x')check=false;
        if(c=='a'){
            ++a;
            mxa=max(mxa,a);
        }
        else a=0;
        if(c=='a' and i-1>0 and s[i-1]!='r' and s[i-1]!='a'){
            cout<< "no "<<i;
            return 0;
        }
        if(c=='r'){
            if(i==n-1){
                cout<<"no "<<i;
                return 0;
            }
            if(s[i+1]!='a'){
                cout<<"no "<<i+1;
                return 0;
            }
        }
        if(c=='b'){
            if(i==n-1){
                cout<<"no "<<i;
                return 0;
            }
            if(s[i+1]!='x'){
                cout<<"no "<<i+1;
                return 0;
            }
        }
    }
    if(check)cout<<"unknown "<<n;
    else cout<<"yes "<<mxa;
    return 0;
}