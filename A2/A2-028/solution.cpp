#include<bits/stdc++.h>
using namespace std;
int n;
string s1;
string s2;
int no;
bool check;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s1>>s2;
    for(int i=0;i<n;++i){
        int num=s1[i]-'0'+s2[i]-'0';
        if(num!=9){
            check=true; 
            ++no;     
        }
    }
    if(!check)cout<<"YES";
    else cout<<"NO "<<no;
    return 0;
}