#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    vector<double> v(n);
    for(auto &i:v)cin>>i;
    double sum=0;
    for(auto t:v)sum+=t;
    double avg=sum/n;
    vector<double> vec=v;
    sort(vec.begin(),vec.end());
    double median;
    if(n%2==1)median=vec[n/2];
    else median=(vec[n/2-1]+vec[n/2])/2.0;
    double maxT=*max_element(v.begin(),v.end());
    double minT=*min_element(v.begin(),v.end());
    int alert=0;
    for(auto t:v)if(t>=37.0)++alert;
    cout<<fixed<<setprecision(2);
    cout<<"SUM="<<sum<<"\n";
    cout<<"AVG="<<avg<<"\n";
    cout<<"MEDIAN="<<median<<"\n";
    cout<<"MAX="<<maxT<<"\n";
    cout<<"MIN="<<minT<<"\n";
    cout<<"ALERT="<<alert<<"\n";
    cout<<"SORTED=";
    for(int i=0;i<n;++i){
        cout<<vec[i]<<" ";
    }
    return 0;
}