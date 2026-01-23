#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0; // move outside loop

    while(n--) {
        string s;
        cin >> s;

        if(s[1] == '+') {
            count++;
        } else {
            count--;
        }
    }

    cout << count << endl;
    return 0;
}
