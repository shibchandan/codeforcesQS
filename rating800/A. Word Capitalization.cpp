// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     s[0]=toupper(s[0]);
//     cout<<s;
//     return 0;
// }


//2nd approach
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, r;
    cin >> s;

    stringstream iss(s);   // put string into a stream
    char a;
    iss >> a;              // extract first character

    // Convert lowercase to uppercase using bitwise trick
    a = char(a & ~32);

    cout << a;

    getline(iss, r);       // get the rest of the string
    cout << r << endl;

    return 0;
}
