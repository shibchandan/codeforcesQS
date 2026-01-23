#include <bits/stdc++.h>
using namespace std;

int main() {
    set<char> s;
    set<char> i = {'{', '}', ','};
    char c;

    while (cin >> c) {
        if (i.find(c) == i.end())
            s.insert(c);
    }

    cout << s.size();
}
