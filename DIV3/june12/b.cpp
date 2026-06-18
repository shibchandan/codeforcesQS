#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool ok = true;

        for (int st = 0; st < k; st++) {
            int cnt = 0;

            for (int i = st; i < n; i += k) {
                if (s[i] == '1') cnt++;
            }

            if (cnt % 2) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}