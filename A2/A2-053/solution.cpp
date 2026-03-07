#include<bits/stdc++.h>
using namespace std;
string school;
int digits[11];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin,school);
    int len=school.length();
    char first_Char=toupper(school[0]);
    char last_Char=toupper(school[len-1]);
    int ascii_First=first_Char;
    int ascii_Last=last_Char;
    for(int i=1;i<=10;++i){
        int i_Val=i-1;
        int val=0;
        if(i%2==1)val=ascii_First+i_Val;
        else val=ascii_Last-i_Val;
        val=val%len;
        if(val>9)val=val%10;
        digits[i]=val;
    }
    for(int i=3;i<=8;++i){
        cout<<digits[i]<<" ";
    }
    return 0;
}