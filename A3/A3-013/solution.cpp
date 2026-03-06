#include<bits/stdc++.h>
using namespace std;
int n,d;
int mn,mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>d;
    while(n--){
        int h;
        cin>>h;
        if(h%4==0 and h%3!=0){
            mn+=10*h/4;
            mx+=10*h/4;
        }
        else if(h%3==0 and h%4!=0){
            mn+=10*h/3;
            mx+=10*h/3;
        }
        else{
            mn+=10*h/4;
            mx+=10*h/3;
        }
    }
    cout<<d-mx<<" "<<d-mn;
    return 0;
}