#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int minV=min(a,b);
    cout<<minV<<" "<<abs(a-b)/2<<endl;
}