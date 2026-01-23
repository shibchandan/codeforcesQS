#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<bool> flag(26, false);

    for(int i = 0; i < n; i++){
        char c = tolower(s[i]);
        if(c >= 'a' && c <= 'z'){
            flag[c - 'a'] = true;
        }
    }

    for(int i = 0; i < 26; i++){
        if(flag[i] == false){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
