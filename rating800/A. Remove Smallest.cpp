// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> v(n);
//         for(int i=0; i<n; i++){
//             cin>>v[i];
//         }
//         sort(v.begin(), v.end());
//         int j=1;
//         while(j<n){
//             if(v[j]-v[j-1]<=1){
//                 j++;
//             }else{
//                 cout<<"NO"<<endl;
//                 break;
//             }
//         }
//         if(j==n){
//             cout<<"YES"<<endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int MIN = INT_MAX;
        int MAX = INT_MIN;

        set<int> s;

        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            s.insert(a);
            MIN = min(MIN, a);
            MAX = max(MAX, a);
        }

        cout << (MAX - MIN + 1 == s.size() ? "YES" : "NO") << endl;
    }

    return 0;
}
