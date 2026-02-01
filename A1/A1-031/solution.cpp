#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    if(s.length()==6){
        for(int i=0;i<3;++i){
            cout<<s[i];
        }
        cout<<",";
        for(int i=3;i<6;++i){
            cout<<s[i];
        }
    }
    else if(s.length()==5){
        for(int i=0;i<2;++i){
            cout<<s[i];
        }
        cout<<",";
        for(int i=2;i<5;++i){
            cout<<s[i];
        }
    }
    else if(s.length()==4){
        cout<<s[0]<<",";
        for(int i=1;i<4;++i){
            cout<<s[i];
        }
    }
    return 0;
}