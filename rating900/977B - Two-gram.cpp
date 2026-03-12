#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    string s;
    cin >> n >> s;
    int cnt = 0;
    string ss, twogram;
    map<string, int> mp;
    for(int i=0; i<n-1; i++){
        ss=s[i], ss+=s[i+1];
        mp[ss]++;
        if(mp[ss]>cnt){
            cnt=mp[ss];
            twogram=ss;
        }
    }
    cout << twogram;
}