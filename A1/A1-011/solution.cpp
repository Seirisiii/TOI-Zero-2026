#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    int cnt=1;
    char prev=s[0];
    for(int i=1;i<s.length();++i){
        if(s[i]!=prev){
            cout<<cnt<<prev;
            cnt=0;
        }
        prev=s[i];
        ++cnt;
    }
    if(cnt>0)cout<<cnt<<prev;
    return 0;
}