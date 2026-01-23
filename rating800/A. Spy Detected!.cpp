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
//         int cnta=1;
//         int cntb=0;
//         int cntaIndex=0;
//         int cntbIndex=-1;
//         for(int i=1; i<n; i++){
//             if(v[i]==v[0]){
//                 cnta++;
//                 cntaIndex=i;
//             }else{
//                 cntb++;
//                 cntbIndex=i;
//             }
//         }
//         if(cnta==1){
//             cout<<cntaIndex+1<<endl;
//         }else{
//             cout<<cntbIndex+1<<endl;    
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

        vector<int> a(n);
        int cnt[101] = {0};

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }

        for (int i = 0; i < n; i++) {
            if (cnt[a[i]] == 1) {
                cout << i + 1 << "\n";
                break;
            }
        }
    }
    return 0;
}
