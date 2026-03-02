#include<bits/stdc++.h>
using namespace std;
int n,male,female;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin>>n and n>=0){
        if(n%2)++male;
        else ++female;
    }
    cout<<male<<" "<<female<<" "<<male+female;
    return 0;
}