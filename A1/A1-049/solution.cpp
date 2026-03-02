#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    int n1=n/10000;
    int n2=n/1000%10;
    int n3=n/100%10;
    int n4=n/10%10;
    int n5=n%10;
    if(n1>5)cout<<9;
    else if(n2>5)cout<<10;
    else if(n3>5)cout<<11;
    else if(n4>5)cout<<12;
    else if(n5>5)cout<<14;
    else cout<<13;
    bool isPalindrome=(n1==n5 and n2==n4);
    if(isPalindrome){
        if(n1+n5>5)cout<<1;
        else if(n2*n4>5)cout<<2;
        else cout<<0;
    }
    else{
        int x=0;
        if(n5!=0 and (n1*2+n5)/(2*n5)>5)cout<<1;
        else if(n2-n5>5)cout<<2;
        else cout<<0;
    }
    int sum=n1+n2+n3+n4+n5;
    int prod=n1*n2*n3*n4*n5;
    if(sum>25)cout<<1;
    else if(prod>55)cout<<2;
    else cout<<0;;
    return 0;
}