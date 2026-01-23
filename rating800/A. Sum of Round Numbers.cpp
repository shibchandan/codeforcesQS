#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v;
        int d = 10;

        while (n > 0) {
            int r = n % d;
            if (r != 0) {
                v.push_back(r);
                n -= r;
            }
            d *= 10;
        }

        cout << v.size() << "\n";
        for (int x : v) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
