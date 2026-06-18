#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        bool r=false;
        for(int i=0; i<8; i++){
            string s;
            cin>>s;
            if(s=="RRRRRRRR") r=true;
        }
        if(r) cout<<"R\n";
        else cout<<"B\n";
    }
}