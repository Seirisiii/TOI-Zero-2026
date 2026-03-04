#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>n;
  if(n==0){
    cout<<"0\n0\n0";
    return 0;
  }
  int binary=n;
  string s="";
  while(binary>0){
    if(binary%2==0){
      s="0"+s;
    }
    else s="1"+s;
    binary/=2;
  }
  cout<<s<<"\n";
  int octal=n;
  s="";
  while(octal>0){
    char c=octal%8+'0';
    s=c+s;
    octal/=8;
  }
  cout<<s<<"\n";
  cout<<uppercase<<hex<<n<<"\n";
  return 0;
}