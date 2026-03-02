#include<bits/stdc++.h>
using namespace std;
int n;
int sum;
int odd,even;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        sum+=x;
        if(x%2)++odd;
        else ++even;
    }
    cout<<"SUM "<<sum<<"\n";
    cout<<"EVEN "<<even<<"\n";
    cout<<"ODD "<<odd<<"\n";
    return 0;
}