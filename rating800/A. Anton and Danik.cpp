#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=s.length();
    int d=0;
    for(int i=0; i<len; i++){
        if(s[i]=='A'){
            d++;
        }else{
            d--;
        }
    }
    if(d>0){
        cout<<"Anton"<<endl;
    }else if(d<0){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
}