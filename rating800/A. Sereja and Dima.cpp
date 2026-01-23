// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> a(n);
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int l = 0, r = n - 1;
//     int sereja = 0, dima = 0;
//     bool turn = true;

//     while(l <= r) {
//         if(a[l] > a[r]) {
//             if(turn) sereja += a[l];
//             else dima += a[l];
//             l++;
//         } else {
//             if(turn) sereja += a[r];
//             else dima += a[r];
//             r--;
//         }
//         turn = !turn;
//     }

//     cout << sereja << " " << dima << endl;
// }


#include <bits/stdc++.h>
using namespace std;

int a[1000], b[2];

int main() {
    int n;
    cin >> n;

    int l = 0, r = n - 1;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[l] > a[r]) {
            b[i % 2] += a[l];
            l++;
        } else {
            b[i % 2] += a[r];
            r--;
        }
    }

    cout << b[0] << " " << b[1];
}
