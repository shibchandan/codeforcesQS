#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long sum = 0;
        long long ans = 1e18;

        for(int i = 0; i < n; i++){
            sum += a[i];
            long long cur = sum / (i + 1);
            ans = min(ans, cur);
            cout << ans << " ";
        }
        cout << "\n";
    }
}