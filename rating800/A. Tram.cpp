#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int ans=0;
    int tempA=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        tempA=tempA - a + b;
        ans=max(ans,tempA);
    }
    
    
    cout<<ans<<endl;
    return 0;
}