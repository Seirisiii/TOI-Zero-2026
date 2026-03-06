#include<bits/stdc++.h>
using namespace std;
int n;
int diff[725];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a>=b){
            --diff[360];
            ++diff[0];
        }
        ++diff[a];
        --diff[b];
    }
    vector<int> lit(720,0);
    int cur=0;
    for(int i=0;i<360;++i){
        cur+=diff[i];
        lit[i]=lit[i+360]=(cur>0)?1:0;
    }
    int total=0;
    for(int i=0;i<360;++i){
        if(lit[i])++total;
    }
    if(total==360){
        cout<<360;
        return 0;
    }
    int streak=0,res=0;
    for(int i=0;i<720;++i){
        if(lit[i])++streak;
        else{
            res=max(res,min(streak,360));
            streak=0;
        }
    }
    res=max(res,min(streak,360));
    cout<<res;
    return 0;
}