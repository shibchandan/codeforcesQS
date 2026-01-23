#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int ans=0;
        int rem=abs(a-b);
        ans+=rem/10;
        rem=rem%10;
        if(rem>0){
            ans++;
        }
        cout<<ans<<endl;
    }
}