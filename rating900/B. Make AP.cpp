#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;

        bool ok=false;

        long long a1=2*b-c;
        if(a1>0 && a1%a==0) ok=true;

        long long sum=a+c;
        if(sum%2==0){
            long long b1=sum/2;
            if(b1%b==0) ok=true;
        }

        long long c1=2*b-a;
        if(c1>0 && c1%c==0) ok=true;

        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
}