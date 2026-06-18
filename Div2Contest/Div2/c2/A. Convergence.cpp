#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int l = 0, r = n - 1;
        int sixseven = 0;

        while(l < r){
            if(a[l] != a[r]){
                sixseven++;
            }
            l++;
            r--;
        }

        cout << sixseven << "\n";
    }
}