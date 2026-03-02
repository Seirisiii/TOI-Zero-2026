#include<bits/stdc++.h>
using namespace std;
string a,b;
string t="love";
string res;
int w,r,mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    int n=a.length();
    int m=b.length();
    if(n>m){
        swap(a,b);
        swap(n,m);
    }
    for(int i=0;i<m;++i){
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
        if(t.find(a[i%n])!=string::npos or t.find(b[i])!=string::npos){
            res+="w";
            ++w;
            ++r;
            mx=max(mx,r);
        }
        else{
            res+="$";
            r=0;
        }
    }
    cout<<res;
    if(w%2)cout<<to_string(mx);
    else if(mx<2)cout<<"#";
    return 0;
}