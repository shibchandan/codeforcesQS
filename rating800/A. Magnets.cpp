#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int ans=1;
    for(int i=1;i<n;i++){
        int y;
        cin>>y;
        if(x!=y){
            ans++;
            x=y;
        }
    }
    cout<<ans<<endl;
}