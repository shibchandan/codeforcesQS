#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int zero=0, one=0;
    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            zero++;
        }
        else{
            one++;
        }
    }
    cout<<n-2*min(zero, one)<<endl;
}