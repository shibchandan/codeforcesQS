#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if((n/2)%2==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            //int evenS=0;
            //int oddS=0;
            for(int i=1; i<=n/2; i++){
                cout<<2*i<<" ";
                //evenS+=2*i;
            }
            for(int i=1; i<=n/2-1; i++){
                cout<<2*i-1<<" ";
                //oddS+=2*i-1;
            }
            cout<<n+n/2-1<<endl;
        }
    }
}