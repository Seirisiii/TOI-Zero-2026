#include<bits/stdc++.h>
using namespace std;
int n,m;
int sum;
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cin>>n>>m;
    if(n<1 or n>10 or m<1 or m>20){
        cout<<"Data Incorrect";
        return 0;
    }
    for(int i=0;i<n;++i){
        int k=m;
        double avg=0;
        int mx=0;
        while(k--){
            int x;
            cin>>x;
            avg+=x;
            mx=max(mx,x);
            sum+=x;
        }
        avg/=m;
        printf("Team %d: Average = %.2lf, Max = %d\n",i+1,avg,mx);
    }
    cout<<"Total Score of All Teams = "<<sum;
    return 0;
}