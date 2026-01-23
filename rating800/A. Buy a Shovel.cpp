// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a, b;
//     cin >> a >> b;

//     int i = 1;
//     while(i){
//         if((a*i)%10 == 0){
//             cout << i << endl;
//             break;
//         }
//         else if((a*i - b)%10 == 0){
//             cout << i << endl;
//             break;
//         }
//         else{
//             i++;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i = 1; ; i++) {
        if((a * i) % 10 == 0 || (a * i - b) % 10 == 0) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
