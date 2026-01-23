#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans=0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int minV=v[0];
    int maxV=v[0];
    for(int i=1; i<n; i++){
        if(v[i]>maxV){
            ans++;
            maxV=v[i];
        }else if(v[i]<minV){
            ans++;
            minV=v[i];
        }
    }
    cout << ans << endl;
}