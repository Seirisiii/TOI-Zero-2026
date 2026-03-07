#include<bits/stdc++.h>
using namespace std;
using ll=long long;
string tagName[6]={"","TechTrends","EcoLife","FoodieHeaven","FashionWeek","HealthyLiving"};
int n,d;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>d;
    int topIdx=0;
    ll topTotal=-1;
    while(n--){
        int id;
        cin>>id;
        vector<int> v(d);
        for(auto &i:v)cin>>i;
        ll total=0;
        for(auto i:v)total+=i;
        double avg=(double)total/d;
        string trend;
        if(v[d-1]>v[0])trend="GROWING";
        else if(v[d-1]<v[0])trend="DECLINING";
        else trend="STABLE";
        cout<<tagName[id]<<": "<<total<<" total, "<<fixed<<setprecision(2)<<avg<<" avg, "<<trend<<"\n";
        if(total>topTotal){
            topTotal=total;
            topIdx=id;
        }
    }
    cout<<"Top performer: "<<tagName[topIdx]<<"\n";
    return 0;
}