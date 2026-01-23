#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> seen(26, 0);
        bool flag = true;
        seen[s[0]-'A'] = 1;
        for(int i=1; i<n; i++){
            if(s[i]!=s[i-1]){
                if(seen[s[i]-'A']){
                    flag = false;
                    break;
                }
                seen[s[i]-'A'] = 1;
            }
        }
        cout<<(flag?"YES":"NO")<<endl;
    }
    return 0;
}