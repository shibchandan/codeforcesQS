#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;

    cin>>n;
    int c=0;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int maxV=v[n-1];
    for(int i=0; i<n; i++){
        c+=maxV - v[i];
    }
    cout<<c;
}