#include<bits/stdc++.h>
#include<climits>
using namespace std;

int dp[100005];
int n;
int solve(int i, vector<int>& a){
    if(dp[i]!=-1) return dp[i];
    int res=1;
    for (int j=i+1; j<n; j++) {
        if (a[j]>a[i] && (j + 1) % (i + 1) == 0)
            res = max(res, 1+solve(j, a));
    }
    return dp[i]=res;
}
int main(){
    int t;
    cin>>t;
    while(t--){ 
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        memset(dp,-1,sizeof(dp));
        int ans=1;
        for(int i=0; i<n; i++){
            ans=max(ans, solve(i, a));
        }
        cout<<ans<<"\n";
    }
    return 0;
}