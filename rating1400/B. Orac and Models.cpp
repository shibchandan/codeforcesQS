#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        vector<int> dp(n+1,1);
        int ans=1;
        for(int i=1; i<=n; i++){
            for(int j=i*2; j<=n; j+=i){
                if(v[j] > v[i]){
                    dp[j] = max(dp[j], dp[i]+1);
                }
            }
            ans = max(ans, dp[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}