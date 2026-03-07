#include<bits/stdc++.h>
using namespace std;
int t;
bool isVowel(char c){
    c=tolower(c);
    return c=='a' or c=='e' or c=='i' or c=='o' or c=='u';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    cin.ignore();
    for(int i=1;i<=t;++i){
        string s;
        getline(cin,s);
        int vowels=0,max_Consec=0,streak=0;
        for(auto j:s){
            if(isVowel(j)){
                ++vowels;
                ++streak;
                max_Consec=max(max_Consec,streak);
            }
            else streak=0;
        }
        cout<<"Line "<<i<<": vowels = "<<vowels<<", max_consecutive = "<<max_Consec<<"\n";
    }
    return 0;
}