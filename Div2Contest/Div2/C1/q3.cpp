#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<long long, int> cnt;
    map<long long, long long> tot;

    for (int i = 0; i < n; i++) {
        long long x = a[i];
        long long op = 0;
        map<long long, long long> vis;
        
        int limit_ones = 0; 
        
        while (limit_ones < 2) {
            if (vis.find(x) == vis.end()) {
                vis[x] = op;
            } else {
                vis[x] = min(vis[x], op);
            }
            
            if (x == 1) {
                limit_ones++;
            }
            
            if (x % 2 == 0) {
                x /= 2;
                op++;
            } else {
                x = x + 1;
                op++;
            }
        }

        for (auto const& [v, c] : vis) {
            cnt[v]++;
            tot[v] += c;
        }
    }

    long long ans = -1;
    for (auto const& [v, c] : cnt) {
        if (c == n) {
            if (ans == -1 || tot[v] < ans) {
                ans = tot[v];
            }
        }
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}