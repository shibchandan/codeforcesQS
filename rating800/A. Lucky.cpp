#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int first=0, second=0;
        for(int i=0; i<3; i++){
            first+=n%10;
            n/=10;
        }
        for(int i=0; i<3; i++){
            second+=n%10;
            n/=10;
        }
        if(first==second) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}