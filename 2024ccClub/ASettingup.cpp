#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >>a>>b>>c;
        int ans = a;

        if (b % 3 == 0) {
            ans += (b / 3);
            ans += (c / 3);
            if (c % 3 > 0) {
                ans++;
            }
        } else {
            int rem = b % 3;
            if (c >= (3 - rem)) {
                c -= (3 - rem);
                ans += (b / 3) + 1 + (c / 3);
                if (c % 3 > 0) {
                    ans++;
                }
            } else {
                ans = -1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
