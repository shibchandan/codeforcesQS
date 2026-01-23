#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cntE=0;
        int cntO=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(i%2==0 && x%2==1){
                cntO++;
            }else if(i%2==1 && x%2==0){
                cntE++;
            }else{
                continue;
            }
        }
        if(cntE!=cntO){
            cout<<-1<<endl;
        }else{
            cout<<cntE<<endl;
        }
    }
}