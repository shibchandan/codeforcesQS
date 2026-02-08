#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        while(n%6==0){
            n/=6;
            count++;
        }
        while(n%3==0){
            n/=3;
            count+=2;
        }
        if(n==1){
            cout<<count<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}