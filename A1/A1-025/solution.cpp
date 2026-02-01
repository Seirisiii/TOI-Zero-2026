#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    if(s.length()==3){
        s[2]=toupper(s[2]);
        cout<<"10 of ";
        if(s[2]=='D')cout<<"diamonds";
        else if(s[2]=='H')cout<<"hearts";
        else if(s[2]=='S')cout<<"spades";
        else if(s[2]=='C')cout<<"clubs";
    }
    else{
        s[0]=toupper(s[0]);
        s[1]=toupper(s[1]);
        if(s[0]>='2' and s[0]<='9')cout<<s[0]<<" of ";
        else if(s[0]=='A')cout<<"ace of ";
        else if(s[0]=='J')cout<<"jack of ";
        else if(s[0]=='Q')cout<<"queen of ";
        else if(s[0]=='K')cout<<"king of ";
        if(s[1]=='D')cout<<"diamonds";
        else if(s[1]=='H')cout<<"hearts";
        else if(s[1]=='S')cout<<"spades";
        else if(s[1]=='C')cout<<"clubs";
    }
    return 0;
}