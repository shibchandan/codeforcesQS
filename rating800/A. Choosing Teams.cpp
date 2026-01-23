#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    //int ans=0;
    int count=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(5-x>=k){
            count++;
        }
    }
    cout<<count/3;
}