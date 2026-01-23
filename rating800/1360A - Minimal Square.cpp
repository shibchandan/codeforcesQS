// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t; 
//     cin>>t;
//     while(t--){
//         int a, b;
//         cin>>a>>b;
//         int minN=min(a, b);
//         int maxN=max(a, b);
//         int ans1=minN*2;
//         ans1*=ans1;
//         int ans2=maxN*maxN;
//         if(ans1>=minN*2*maxN){
//             cout<<ans1<<endl;
//         }else{
//             cout<<ans2<<endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;

        int minN = min(a, b);
        int maxN = max(a, b);

        int side = max(maxN, 2 * minN);
        cout << side * side << "\n";
    }
    return 0;
}
