#include <bits/stdc++.h>
using namespace std;

int main() {
    int y, w, d; 
    cin >> y >> w;
    d = 6 - max(y, w) + 1;
    cout << d / __gcd(d, 6) << "/" << 6 / __gcd(d, 6);
}
