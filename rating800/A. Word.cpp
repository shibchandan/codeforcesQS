#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=s.length();
    
    int dom=0;
    for(int i=0; i<len; i++){
        if(isupper((unsigned char)s[i])){
            dom++;
        }else{
            dom--;
        }
    }
    if(dom>0){
        for(auto &c:s){
            c=toupper((unsigned char)c);
        }
    }else{
        for(auto &c:s){
            c=tolower((unsigned char)c);
        }
    }
    cout<<s<<endl;
}