#include<bits/stdc++.h>
using namespace std;
string a,b;
int rate[8]={0,25,50,80,110,145,180,250};
int toMin(string s){
    int dot=s.find('.');
    int h=stoi(s.substr(0,dot));
    int m=stoi(s.substr(dot+1));
    return h*60+m;
}
bool valid(string s){
    int dot=s.find('.');
    if(dot==string::npos)return false;
    int h=stoi(s.substr(0,dot));
    int m=stoi(s.substr(dot+1));
    string ms=s.substr(dot+1);
    if(ms.size()!=2)return false;
    return h>=0 and h<=23 and m>=0 and m<=59;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    if(!valid(a) or !valid(b)){
        cout<<"ERROR";
        return 0;
    }
    int ti=toMin(a);
    int to=toMin(b);
    if(ti>=to){
        cout<<"ERROR";
        return 0;
    }
    int diff=to-ti;
    if(diff<15){
        cout<<"FREE";
        return 0;
    }
    int hrs=(diff+59)/60;
    cout<<rate[min(hrs,7)];
    return 0;
}