#include<bits/stdc++.h>
using namespace std;
int a,b,d,r;
int cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>d>>r;
	for(int i=a;i<=b;++i){
		if(i%d==r)++cnt;
	}
	cout<<cnt;
    return 0;
}