#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string x;
        cin >> x;
        int d = x[0] - '0';
        int k = x.size();
        cout << (d - 1) * 10 + k * (k + 1) / 2 << "\n";
    }
    return 0;
}
