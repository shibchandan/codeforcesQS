#include <iostream>
using namespace std;

int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, x, y;
        cin >> n >> x >> y;

        int gcdRequired = 0;
        int gcdForbidden = 0;

        for (int i = 0; i < x; i++) {
            int number;
            cin >> number;
            gcdRequired = calculateGCD(gcdRequired, number);
        }

        for (int i = 0; i < y; i++) {
            int number;
            cin >> number;
            gcdForbidden = calculateGCD(gcdForbidden, number);
        }

        if (gcdRequired == gcdForbidden) {
            cout << -1 << endl;
        } else {
            cout << gcdRequired << endl;
        }
    }
    return 0;
}
