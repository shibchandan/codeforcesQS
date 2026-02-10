// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, m; 
//     int day=0;
//     while(n>0){
//         n--;
//         day++;
//         if(day%m==0){
//             n++;
//         }
//     }
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; 
    cin>>n>>m;
    int day=0;
    for(int i=1; i<=n; i++){
        day++;
        if(i%m==0){
            n++;
        }
    }
    cout<<day<<endl;
}