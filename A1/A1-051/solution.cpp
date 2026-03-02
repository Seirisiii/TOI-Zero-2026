#include<bits/stdc++.h>
using namespace std;
string s;
int k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s>>k;
    k%=26;
    for(auto &i:s)i='a'+(i-'a'+k)%26;
    cout<<s;
    return 0;
}