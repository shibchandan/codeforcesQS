#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        vector<int> a(4);
        for(int i=0; i<4; i++){
            cin>>a[i];
        }
        int inV=a[0];
        int ans=0;
        for(int i=1; i<4; i++){
            if(a[i]>inV){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}