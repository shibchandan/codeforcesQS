#include<bits/stdc++.h>
using namespace std;

int MOD = 998244353;

int main(){
    long long l, r, k;
    cin >> l >> r >> k;

    long long ans = 0;

    if(k == 1){
        if(l <= 1 && 1 <= r){
            unordered_set<int> s = {1};
            if(s.size() == k) ans = 1;
        }
        cout << ans % MOD << endl;
        return 0;
    }

    for(long long i = 1; i <= r; i *= k){
        long long val = i;   // preserve i
        unordered_set<int> s;

        long long x = i;     // use copy

        while(x > 0){
            s.insert(x % 10);
            x /= 10;
        }

        if(val >= l && s.size() == k){
            ans = (ans + val) % MOD;
        }
    }

    cout << ans << endl;
}