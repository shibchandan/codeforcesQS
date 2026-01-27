#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int h, m;
        cin>>h>>m;
        int ans = 0;
        int remM=0, remH=0;
        remM=60-m;
        remH=23-h;
        ans=remM+remH*60;
        cout<<ans<<endl;
    }
}