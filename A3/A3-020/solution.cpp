#include<bits/stdc++.h>
using namespace std;
int white_Head,black_Head;
int white_Body,black_Body;
int same_Color_Quota;
int diff_Color_Quota;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>white_Head>>black_Head>>white_Body>>black_Body>>same_Color_Quota>>diff_Color_Quota;
    for(int i=0;i<=min(white_Head,white_Body);++i){
        for(int j=0;j<=min(black_Head,black_Body);++j){
            int sameSold=min(i+j,same_Color_Quota);
            int remWhiteHead=white_Head-i;
            int remBlackHead=black_Head-j;
            int remWhiteBody=white_Body-i;
            int remBlackBody=black_Body-j;
            int diffMade=min(remWhiteHead,remBlackBody)+min(remBlackHead,remWhiteBody);
            int diffSold=min(diffMade,diff_Color_Quota);
            res=max(res,sameSold+diffSold);
        }
    }
    cout<<res;
    return 0;
}