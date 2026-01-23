#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a;
        cin >> a;
        vector<long long> v(a);
        for (int i = 0; i < a; i++) cin >> v[i];

        long long c = 0;
        long long min_odd = LLONG_MAX;
        int odd_count = 0;

        for (int i = 0; i < a; i++) {
            c += v[i];
            if (v[i] % 2 != 0) {
                odd_count++;
                min_odd = min(min_odd, v[i]);
            }
        }

        if (odd_count == 0) {
            cout << 0 << "\n";
        } else if (odd_count % 2 == 0) {
            cout << c - min_odd << "\n";
        } else {
            cout << c << "\n";
        }
    }
}
