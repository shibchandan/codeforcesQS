#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string p;
        cin >> p;
        cout << p.substr(0, p.size() - 2) + "i" << endl;
    }
    return 0;
}
