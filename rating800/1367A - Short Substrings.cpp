#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        vector<char> v;
        for(int i=0; i<n; i+=2){
            v.push_back(s[i]);
        }
        v.push_back(s[n-1]);
        for(char c:v){
            cout<<c;
        }
        cout<<endl;
    }
}