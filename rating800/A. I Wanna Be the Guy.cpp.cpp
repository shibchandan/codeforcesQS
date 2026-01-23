// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<bool> can(n + 1, false);

//     int p;
//     cin >> p;
//     for (int i = 0; i < p; i++) {
//         int x;
//         cin >> x;
//         can[x] = true;
//     }

//     int q;
//     cin >> q;
//     for (int i = 0; i < q; i++) {
//         int y;
//         cin >> y;
//         can[y] = true;
//     }

//     for (int i = 1; i <= n; i++) {
//         if (!can[i]) {
//             cout << "Oh, my keyboard!";
//             return 0;
//         }
//     }

//     cout << "I become the guy.";
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;

    // We take input for both Little X and Little Y
    for (int i = 1; i <= 2; i++) {
        int pq;
        cin >> pq;
        for (int j = 1; j <= pq; j++) {
            int a;
            cin >> a;
            s.insert(a);
        }
    }

    if ((int)s.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}
