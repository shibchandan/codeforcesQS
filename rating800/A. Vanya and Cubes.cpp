// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int ovC=0;
//     int c=0;
//     int ans=0;
//     for(int i=1;i*i<=n;i++){
//         c+=i;
//         ovC+=c;
//         if(ovC<=n){
//             ans++;
//         }else{
//             break;
//         }
//     }
//     cout<<ans<<endl;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h = 0, cnt = 0;
    cin >> n;
    while (cnt <= n) {
        h++;
        cnt += h * (h + 1) / 2;
    }
    cout << h - 1;
}
