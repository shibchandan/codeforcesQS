#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    long long ans=0;
    //ans = a* (c*(c+1))/2;
    for(int i=0; i<c; i++){
        ans=ans+a*(i+1);
    }
    cout<<max(0LL, ans-b)<<endl;
    // if(ans>b){
    //     cout<<ans-b<<endl;
    // }
    // else{
    //     cout<<0<<endl;
    // }
}