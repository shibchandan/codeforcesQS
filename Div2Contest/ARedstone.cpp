#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        //int prevAns=1;
        bool flag=false;
        for(int i=1; i<n && !flag; i++){
            //int z=prevAns;
            //int x=a[i];
            //int y=0;
            //for(int j=0; j<i; j++){
            for (int j = 0; j < i; j++) {
                if (a[i] == a[j]) {   
                    cout << "YES\n";
                    flag = true;
                    break;
                }
            }
        }
        if (!flag) cout << "NO\n";
        //else cout << "NO\n";
    }
    return 0;
}