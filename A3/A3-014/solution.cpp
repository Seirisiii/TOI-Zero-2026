#include<bits/stdc++.h>
using namespace std;
int n;
int late;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int t=n;
    while(n--){
        int x;
        cin>>x;
        if(x>18)++late;
        else --late;
    }
    cout<<t+max(0,late-1);
    return 0;
}