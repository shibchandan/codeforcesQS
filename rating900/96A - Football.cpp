#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    int count=1;
    int maxC=1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            count++;
            maxC=max(count,maxC);
        }else{
            count=1;
        }
    }
    if(maxC>=7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}