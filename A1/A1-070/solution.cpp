#include<bits/stdc++.h>
using namespace std;
int n;
string types[3]={"Plastic","Can","Glass"};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        double a[3]={};
        for(int i=0;i<3;++i){
            cin>>a[i];
        }
        double sum=a[0]+a[1]+a[2];
        cout<<fixed<<setprecision(1)<<sum;
        if(sum>50)cout<<",Overloaded";
        for(int i=0;i<3;++i){
            if(a[i]>20)cout<<",Check Type "<<types[i];
        }
        cout<<"\n";
    }
    return 0;
}