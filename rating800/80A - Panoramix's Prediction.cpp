// #include <bits/stdc++.h>
// using namespace std;

// bool isPrime(int n){
//     if(n <= 1) return false;
//     for(int i = 2; i * i <= n; i++){
//         if(n % i == 0) return false;
//     }
//     return true;
// }

// int main(){
//     int a, b;
//     cin >> a >> b;

//     for(int i = a + 1; i <= b; i++){
//         if(isPrime(i)){
//             if(i == b) cout << "YES\n";
//             else cout << "NO\n";
//             return 0;
//         }
//     }

//     // If no prime found before reaching b
//     cout << "NO\n";
// }

#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;   // not prime
    }
    return true;   // prime
}

int main(){
    int n, m, i;
    cin >> n >> m;

    for(i = n + 1; i <= m; i++){
        if(isprime(i)) break;
    }

    cout << (i == m ? "YES" : "NO");
}

