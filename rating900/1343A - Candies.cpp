#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;

        for (int k = 2; k <= 30; k++) {
            int dr = pow(2, k) - 1;
            if (n % dr) continue;
            x = n / dr;
            break;
        }

        cout << x << endl;
    }
    return 0;
}
