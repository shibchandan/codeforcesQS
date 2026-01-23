#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;
        if(a>b) ans++;
        else if(b>a) ans--;
        else continue;
    }
    if(ans>0) cout<<"Mishka"<<endl;
    else if(ans<0) cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
}