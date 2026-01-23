#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int cnt = 0;
    while (n > 0) {
        int d = n % 10;
        if (d == 4 || d == 7)
            cnt++;
        n /= 10;
    }

    bool lucky = true;
    if (cnt == 0) lucky = false;
    while (cnt > 0) {
        int d = cnt % 10;
        if (d != 4 && d != 7) {
            lucky = false;
            break;
        }
        cnt /= 10;
    }

    cout << (lucky ? "YES\n" : "NO\n");
    return 0;
}
