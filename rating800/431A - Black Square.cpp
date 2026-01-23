#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a(4);
    for(int i=0; i<4; i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    int n=s.size();
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a[s[i]-'1'];
    }
    cout<<sum<<endl;
}