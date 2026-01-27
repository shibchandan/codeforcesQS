#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       string s;
        cin>>s;
        int n=s.size();
        if(n % 2 == 1){
            cout << "NO" << endl;
            continue;
        }
        int i;
        for(i=0; i<n/2; i++){
            if(s[i]==s[i+n/2]){
                continue;
            }
            else{
                cout<<"NO"<<endl;
                break;
            }
        }
        if(i==n/2){
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}