#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maxIdx=0;
    int minaIdx=n;
    int maxV=-1;
    int minV=1e9+7;
    for(int i=1; i<=n; i++){
        int a;
        cin>>a;
        if(a>maxV){
            maxV=a;
            maxIdx=i;
        }
        if(a<=minV){
            minV=a;
            minaIdx=i;
        }
    }
    int ans=0;
    if(maxIdx>minaIdx){
        ans=(maxIdx-1+n-minaIdx)-1;
    }else{
        ans=maxIdx-1+n-minaIdx;
    }
    cout<<ans<<endl;
}