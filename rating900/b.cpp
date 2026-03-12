#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, m, n;
        cin>>x>>m>>n;
        while(m>0 && x>20){
            x/=2;
            x+=10;
            m--;
        }
        x-=10*n;
        
        if(x<=0){
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
}