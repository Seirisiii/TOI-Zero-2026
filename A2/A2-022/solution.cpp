#include<bits/stdc++.h>
using namespace std;
int l,n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>l>>n;
    vector<int> prefix(l+1);
    while(n--){
        int a,b;
        cin>>a>>b;
        ++prefix[a];
        --prefix[b];
    }
    for(int i=1;i<=l;++i){
        prefix[i]+=prefix[i-1];
    }
    cout<<*max_element(prefix.begin(),prefix.end());
    return 0;
}