#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char s[4];
        cin>>s;
        if(strcmpi(s, "yes")==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}