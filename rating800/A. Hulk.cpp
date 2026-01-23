#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int f=0;
    for(int i=0; i<n; i++){
        if(f==0){
            cout<<"I hate ";
            f=1;
        }
        else{
            cout<<"I love ";
            f=0;
        }
        if(i==n-1){
            cout<<"it"<<endl;
        }
        else{
            cout<<"that ";
        }
    }
}