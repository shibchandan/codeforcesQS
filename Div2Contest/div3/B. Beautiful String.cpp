#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (isPalindrome(s)) {
            cout << 0 << "\n";
            continue;
        }

        vector<int> pos;
        for (int i = 0; i < n; i++)
            if (s[i] == '0') pos.push_back(i + 1);

        if (pos.empty())
            for (int i = 0; i < n; i++)
                if (s[i] == '1') pos.push_back(i + 1);

        cout << pos.size() << "\n";
        for (int i = 0; i < (int)pos.size(); i++)
            cout << pos[i] << (i + 1 == pos.size() ? '\n' : ' ');
    }
}
