#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int gift, a[100];
    for(int i=1;i<=n;i++){
        cin>>gift;
        a[gift] = i;
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
}