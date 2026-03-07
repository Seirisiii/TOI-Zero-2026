#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    cout<<"Student:";
    for(int i=1;i<=n;++i){
        cout<<" Student"<<i<<":";
    }
    cout<<"\n";
    int hi=*max_element(v.begin(),v.end());
    int lo=*min_element(v.begin(),v.end());
    double sum=0;
    for(auto i:v){
        sum+=i;
    }
    double avg=(n>0)?sum/n:0.0;
    cout<<"Highest score: "<<hi<<"\n";
    cout<<"Lowest score: "<<lo<<"\n";
    cout<<fixed<<setprecision(1)<<"Average score: "<<avg<<"\n";
    cout<<"Students who scored above average:\n";
    for(int i=0;i<n;++i){
        if(v[i]>avg)cout<<"Student "<<i+1<<"\n";
    }
    return 0;
}