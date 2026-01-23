// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a=n/3;
//         int b=a;
//         if(n%3==1){
//             cout<<a+1<<" "<<b<<endl;
//         }
//         else if(n%3==2){
//             cout<<a<<" "<<b+1<<endl;            
//         }else{
//             cout<<a<<" "<<b<<endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << n / 3 + (n % 3 == 1) << " " << n / 3 + (n % 3 == 2) << endl;
    }
}
