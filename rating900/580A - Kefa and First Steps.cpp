#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    //int num=v[0];
    int count=1;
    int maxC=1;
    for(int i=1; i<n; i++){
        if(v[i]>=v[i-1]){ count++;
            maxC=max(count, maxC);
        }
        else count=1;
    }
    cout<<maxC<<endl;
}