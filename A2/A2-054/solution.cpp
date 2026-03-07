#include<bits/stdc++.h>
using namespace std;
int n;
double p;
int arr[55][55];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>p;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    int total_Defective=0,total_Points=0;
    for(int i=0;i<n;++i){
        int row_Defective=0,row_Points=0;
        for(int j=0;j<n;++j){
            cout<<arr[i][j]<<" ";
            if(arr[i][j]>0)++row_Defective;
            row_Points+=arr[i][j];
        }
        cout<<row_Defective<<" "<<row_Points<<"\n";
        total_Defective+=row_Defective;
        total_Points+=row_Points;
    }
    for(int j=0;j<n;++j){
        int col_Defective=0;
        for(int i=0;i<n;++i){
            if(arr[i][j]>0)++col_Defective;
        }
        cout<<col_Defective<<" ";
    }
    cout<<"\n";
    for(int j=0;j<n;++j){
        int col_Points=0;
        for(int i=0;i<n;++i){
            col_Points+=arr[i][j];
        }
        cout<<col_Points<<" ";
    }
    cout<<"\n"<<total_Defective<<" "<<total_Points<<" "<<fixed<<setprecision(2)<<total_Points*p;
    return 0;
}