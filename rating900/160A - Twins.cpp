#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.rbegin(),v.rend());
    int cSum=0;
    
    for(int i=0;i<n;i++){
        cSum+=v[i];
        
        if(cSum*2>sum){
            cout<<i+1<<endl;
            break;
        }
    }
    
}