#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int s;
        cin >> s;

        int ans = 0;

        while(s >= 10){
            int spend = (s / 10) * 10;
            ans += spend;
            s = (s / 10) + (s % 10);
        }

        ans += s;

        cout << ans << endl;
    }
}