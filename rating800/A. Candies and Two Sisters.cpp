#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(a<3){
            cout<<0<<endl;
        }
        else{
            cout<<(a-1)/2<<endl;
        }
    }
}