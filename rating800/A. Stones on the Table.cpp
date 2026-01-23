//#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    string s;
    cin>>s;
        //int n=s.length();
    int c=0;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            c++;
        }
    }
    cout<<c<<endl;
}    
