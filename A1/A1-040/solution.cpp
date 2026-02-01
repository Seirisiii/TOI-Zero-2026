#include<bits/stdc++.h>
using namespace std;
int res;
int main(){
    while(true){
        int x;
        cin>>x;
        if(x==5)break;
        else if(x==1)res+=100;
        else if(x==2)res+=120;
        else if(x==3)res+=200;
        else if(x==4)res+=60;
    }
    cout<<"Bye Bye\nTotal Calories: "<<res;
    return 0;
}