#include<bits/stdc++.h>
using namespace std;
char c;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>c>>n;
    if(c=='H' and n==4567)cout<<"safe unlocked";
    else if(c=='H' and n!=4567)cout<<"safe locked - change digit";
    else if(c!='H' and n==4567)cout<<"safe locked - change char";
    else cout<<"safe locked";
    return 0;
}