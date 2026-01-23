// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, k;
//     cin >> n >> k;
//     int ans=0;
//     int rem=240-k;
//     int i=1;
//     while(i<=n && rem>=5*i){
//         rem-=5*i;
//         ans++;
//         i++;
//     }
//     cout << ans << endl;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int R = 240 - k;
    int x = floor(( -1 + sqrt(1 + 8.0 * R / 5) ) / 2);

    cout << min(n, x) << endl;
}
