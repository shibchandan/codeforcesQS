# include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin>>n>>t;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int l=0;
    long long sum=0;
    int ans=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
        while(sum>t){
            sum-=a[l];
            l++;
        }
        ans=max(ans, i-l+1);
    }
    cout<<ans<<endl;
}