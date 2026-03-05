#include<bits/stdc++.h>
using namespace std;
int n;
bool pass=true;
double avg;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        if(x<50)pass=false;
        avg+=x;
    }
    avg/=n;
    if(avg<60)pass=false;
    cout<<fixed<<setprecision(1)<<avg<<"\n"<<(pass?"PASS":"FAIL");
    return 0;
}