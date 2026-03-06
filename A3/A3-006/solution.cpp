#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
priority_queue<int,vector<int>,greater<int>> a;
priority_queue<int> b;
ll res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=200;++i){
        a.emplace(i);
        for(int j=0;j<9;++j){
            a.emplace(2*i);
        }
    }
    while(n--){
        int x;
        cin>>x;
        b.emplace(x);
    }
    while(!b.empty()){
        res+=(ll)a.top()*b.top();
        a.pop();
        b.pop();
    }
    cout<<res;
    return 0;
}