#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, x;
        cin >> a >> b >> x;

        long long ans = 0;

        while (a != b) {
            if (a > b) {
                if (a / x >= b) {
                    if (a % x == 0) {
                        a /= x;
                        ans++;
                    } else {
                        long long need = x - (a % x);
                        a += need;
                        ans += need;
                    }
                } else {
                    ans += (a - b);
                    break;
                }
            } else {
                if (b / x >= a) {
                    if (b % x == 0) {
                        b /= x;
                        ans++;
                    } else {
                        long long need = x - (b % x);
                        b += need;
                        ans += need;
                    }
                } else {
                    ans += (b - a);
                    break;
                }
            }
        }

        cout << ans << "\n";
    }
}