#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        
        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < m; ++i) cin >> b[i];
        
        int h = lower_bound(a.begin(), a.end(), y) - a.begin();
        int v = lower_bound(b.begin(), b.end(), x) - b.begin();
        
        cout << h + v << endl;
    }
    
    return 0;
}
