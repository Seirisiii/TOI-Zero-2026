#include<bits/stdc++.h>
using namespace std;
string s,t;
int w;
map<pair<string,string>,pair<int,int>> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    mp[{"BKK","CNX"}]={10,30};
    mp[{"CNX","UBP"}]={15,40};
    mp[{"UBP","BKK"}]={20,40};
    mp[{"BKK","PKT"}]={25,50};
    mp[{"PKT","CNX"}]={30,60};
    mp[{"UBP","PKT"}]={40,70};
    cin>>s>>t>>w;
    if(mp.find({s,t})==mp.end())cout<<"Error";
    else cout<<mp[{s,t}].second*w+mp[{s,t}].first;
    return 0;
}