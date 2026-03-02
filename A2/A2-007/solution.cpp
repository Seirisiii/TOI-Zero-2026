#include<bits/stdc++.h>
using namespace std;
const int N=305;
int n,m;
vector<pair<int,int>> covered[N];
vector<int> cover[N];
vector<int> use;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<pair<int,int>> v(n);
    for(auto &[a,b]:v)cin>>a>>b;
    for(int i=0;i<n;++i){
        auto [x,y]=v[i];
        for(int j=0;j<n;++j){
            auto [a,b]=v[j];
            if(x<a and b<y)covered[j].emplace_back(y-x,i),cover[i].emplace_back(j);
        }
        covered[i].emplace_back(y-x,i);
        cover[i].emplace_back(i);
    }
    for(int i=0;i<n;++i)sort(covered[i].begin(),covered[i].end());
    vector<int> q(m);
    for(auto &x:q){
        cin>>x;
        --x;
    }
    vector<bool> picked(n,false);
    for(auto x:q){
        if(picked[x])continue;
        ++res;
        picked[x]=true;
        int r=x;
        for(auto [sz,p]:covered[x]){
            for(auto cv:cover[p]){
                if(find(q.begin(),q.end(),cv)!=q.end() and !picked[cv]){
                    picked[cv]=true;
                    r=p;
                }
            }
        }
        use.emplace_back(r);
    }
    cout<<res<<"\n";
    for(auto u:use)cout<<u+1<<" ";
    return 0;
}