#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s="codeforces";
    while(t--){
       char c;
       cin>>c;
       cout<<(s.find(c)==-1?"NO\n":"YES\n")<<endl;
    }

}