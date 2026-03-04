#include<bits/stdc++.h>
using namespace std;
int q;
queue<string> em,nm;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>q;
    while(q--){
        string cmd;
        cin>>cmd;
        if(cmd=="ARRIVE"){
            string name,type;
            cin>>name>>type;
            if(type=="emergency")em.push(name);
            else nm.push(name);
        }
        else if(cmd=="TREAT"){
            if(!em.empty())em.pop();
            else if(!nm.empty())nm.pop();
        }
        else{
            if(em.empty() and nm.empty()){
                cout<<"EMPTY\n";
                continue;
            }
            queue<string> tmp=em;
            while(!tmp.empty()){
                cout<<tmp.front()<<" ";
                tmp.pop();
            }
            tmp=nm;
            while(!tmp.empty()){
                cout<<tmp.front()<<" ";
                tmp.pop();
            }
            cout<<"\n";
        }
    }
    return 0;
}