#include<bits/stdc++.h>
using namespace std;
int age;
string s;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>age>>s;
    if(age<5)res=0;
    else if(age>=5 and age<=18)res=100;
    else res=150;
    if(s=="Wed")res/=2;
    cout<<res;
    return 0;
}