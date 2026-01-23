#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string m, n;
    cin >> m >> n;

    for (int i = 0; i < m.size(); i++) {
        char a = tolower(m[i]);
        char b = tolower(n[i]);

        if (a < b) {
            cout << "-1";
            return 0;
        } else if (a > b) {
            cout << "1";
            return 0;
        }
    }

    cout << "0";
    return 0;
}
