#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;

        if(n <= 2){
            cout << 1 << endl;
        } else {
            int c = 1;
            c += ceil((double)(n - 2) / x);
            cout << c << endl;
        }
    }
}
