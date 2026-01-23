// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] == '.') {
//             cout << 0;
//         } else {
//             if (s[i + 1] == '.') {
//                 cout << 1;
//             } else {
//                 cout << 2;
//             }
//             i++; // skip the next character
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    while (cin >> c) {
        if (c == '.') 
            cout << 0;
        else {
            cin >> c;
            if (c == '.')
                cout << 1;
            else
                cout << 2;
        }
    }
}
