#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll p,h;
vector<pair<ll,ll>> blocks;
vector<pair<int,char>> res;
void check(int i){
    if(i<0)return ;
    check(i-1);
    bool ok=(blocks[i+1].first==blocks[i].second);
    res.emplace_back(i+1,(ok?'P':'X'));
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin>>p>>h){
        blocks.emplace_back(p,h);
        if(h==0)break;
    }
    int n=blocks.size()-1;
    if(n==0){
        cout<<"1X\n";
        return 0;
    }
    check(n-1);
    reverse(res.begin(),res.end());
    for(auto [n,c]:res){
        cout<<n<<c<<"\n";
    }
    return 0;
}