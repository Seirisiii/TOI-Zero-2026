#include<bits/stdc++.h>
using namespace std;
string s;
int resa,rese,resi,reso,resu;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	getline(cin,s);
	for(int i=0;i<s.length();++i){
		if(s[i]=='a' or s[i]=='A')++resa;
		else if(s[i]=='e' or s[i]=='E')++rese;
		else if(s[i]=='i' or s[i]=='I')++resi;
		else if(s[i]=='o' or s[i]=='O')++reso;
		else if(s[i]=='u' or s[i]=='U')++resu;
	}
	if(resa>0)cout<<"a: "<<resa<<"\n";
	if(rese>0)cout<<"e: "<<rese<<"\n";
	if(resi>0)cout<<"i: "<<resi<<"\n";
	if(reso>0)cout<<"o: "<<reso<<"\n";
	if(resu>0)cout<<"u: "<<resu<<"\n";
	return 0;
}