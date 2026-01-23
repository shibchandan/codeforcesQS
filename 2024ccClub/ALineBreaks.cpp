#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<string> words(n);
        for (int i = 0; i < n; ++i) {// store number of words
            cin >> words[i];
        }

        int total_length = 0, count = 0;
        for (int i = 0; i < n; ++i) {
            if (total_length + words[i].length() <= m) {
                total_length += words[i].length();
                ++count;
            } else {
                break;
            }
        }
        
        cout << count << endl;
    }

    return 0;
}
