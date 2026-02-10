#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n, a, b;
        cin>>n>>a>>b;
        for(int i=0; i<b; i++){
            s+='a'+i;
        }
        for(int i=0; i<a-b; i++){
            s+=s[i];
        }
        for(int i=0; i<n-a; i++){
            s+=s[i];
        }
        cout<<s<<endl;
    }
}