#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxV=INT_MIN;
        int minV=INT_MAX;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            maxV=max(maxV, x);
            minV=min(minV, x);
        }
        cout<<maxV - minV<<endl;
    }
}
