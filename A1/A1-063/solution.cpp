#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    int a,n;
    while(cin>>a>>n){
        if(a<15){
            cout<<-1<<"\n";
            continue;
        }
        if(n>t){
            cout<<-2<<"\n";
            continue;
        }
        int price=150;
        if(a>=15 and a<=22)price=150*0.8;
        else if(a>=60)price=150*0.5;
        t-=n;
        cout<<price*n<<" "<<t<<"\n";
    }
    return 0;
}