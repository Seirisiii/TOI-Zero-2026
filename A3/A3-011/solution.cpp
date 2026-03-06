#include<bits/stdc++.h>
using namespace std;
int n;
int prefix[105];
unordered_set<int> s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        int x;
        cin>>x;
        prefix[i]=prefix[i-1]+x;
    }
    for(int i=0;i<n;++i){
        for(int j=i+1;j<=n;++j){
            s.insert(prefix[j]-prefix[i]);
        }
    }
    cout<<(int)s.size();
    return 0;
}