#include<bits/stdc++.h>
using namespace std;
string s1;
string s2;
int age;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s1>>s2>>age;
    if(s1.length()>5 and s2.length()>5)cout<<s1[0]<<s1[1]<<s2[s2.length()-1]<<age%10;
    else cout<<s1[0]<<age<<s2[s2.length()-1];
    return 0;
}