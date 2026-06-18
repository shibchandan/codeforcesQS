#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long>a(n);
        for(auto &x:a)cin>>x;

        long long k = 0;

        for(int i=1;i<n;i++){
            if(a[i] < a[i-1]){
                k = max(k, a[i-1] - a[i]);
            }
        }

        long long prev = a[0];
        bool ok = true;

        for(int i=1;i<n;i++){
            long long cur = a[i];

            if(cur < prev){
                cur += k;
            }

            if(cur < prev){
                ok = false;
                break;
            }

            prev = cur;
        }

        cout<<(ok?"YES\n":"NO\n");
    }
}