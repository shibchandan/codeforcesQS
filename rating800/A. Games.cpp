#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;   // n teams

    int a[n], b[n];
    int ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            if (a[i] == b[k]) {
                ans++;
            }
        }
    }

    cout << ans;
    return 0;
}
