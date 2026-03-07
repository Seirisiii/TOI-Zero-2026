#include<bits/stdc++.h>
using namespace std;
string name[4]={"CHE","LIV","MUN","NEW"};
int pts[4];
int idx;
bool compare(int a,int b){
    if(pts[a]!=pts[b])return pts[a]>pts[b];
    return name[a]<name[b];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<4;++i){
        for(int j=i+1;j<4;++j){
            int a,b;
            cin>>a>>b;
            if(a>b)pts[i]+=3;
            else if(a<b)pts[j]+=3;
            else{
                ++pts[i];
                ++pts[j];
            }
        }
    }
    int order[4]={0,1,2,3};
    sort(order,order+4,compare);
    for(int i=0;i<4;++i){
        cout<<i+1<<". "<<name[order[i]]<<" "<<pts[order[i]]<<"\n";
    }
    return 0;
}