#include<bits/stdc++.h>
using namespace std;
int n;
int sum,mx,mn=1000;
double avg;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int N=n;
    while(n--){
        int x;
        cin>>x;
        sum+=x;
        mx=max(mx,x);
        mn=min(mn,x);
    }
    cout<<sum<<"\n"<<mx<<"\n"<<mn<<"\n";
    printf("%.1lf",(double)sum/N);
    return 0;
}