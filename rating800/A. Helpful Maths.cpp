#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define loop(i,a) for(int i=0;i<a;i++)
#define pb push_back
int main(){
    string s;
    cin>>s;
    vll v;
    loop(i,s.length()){
        if(i%2==0){
            v.push_back(s[i]-'0');
        }
    }
    sort(v.begin(),v.end());
    loop(i,v.size()){
        cout<<v[i];
        if(i!=v.size()-1){
            cout<<"+";
        }
    }
    return 0;
}