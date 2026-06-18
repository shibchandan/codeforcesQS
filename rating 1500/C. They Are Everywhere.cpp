#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>st(s.begin(),s.end());
    int l=0;
    int c=0;
    int ans=n;
    vector<int> f(256,0);
    for(int r=0; r<n; r++){
        if(f[s[r]]==0) c++;
        f[s[r]]++;
        while(c==st.size()){
            ans=min(ans,r-l+1);
            f[s[l]]--;
            if(f[s[l]]==0) c--;
            l++;
        }
    }
    cout<<ans<<"\n";
}