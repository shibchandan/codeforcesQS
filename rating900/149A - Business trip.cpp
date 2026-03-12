// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int k;
//     cin >> k;

//     if(k == 0){
//         cout << 0 << endl;
//         return 0;
//     }

//     int a[12];
//     for(int i = 0; i < 12; i++){
//         cin >> a[i];
//     }

//     sort(a, a + 12, greater<int>());

//     int val = 0;
//     for(int i = 0; i < 12; i++){
//         val += a[i];
//         if(val >= k){
//             cout << i + 1 << endl;
//             return 0;
//         }
//     }

//     cout << -1 << endl;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    int a[12];
    for(int i = 0; i < 12; i++) {
        cin >> a[i];
    }

    if(k == 0) {
        cout << 0 << endl;
        return 0;
    }

    sort(a, a + 12);

    int cnt = 0;
    for(int i = 11; i >= 0; i--) {
        k -= a[i];
        cnt++;
        if(k <= 0) {
            cout << cnt << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}
