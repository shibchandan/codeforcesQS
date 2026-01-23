#include <iostream>
using namespace std;

int main() {
    int n, wealth, max_sum, current_sum = 0;
    cin >> n;

    cin >> wealth;
    max_sum = wealth;

    for (int i = 1; i < n; ++i) {
        current_sum = max(wealth, current_sum + wealth);
        max_sum = max(max_sum, current_sum);
        cin >> wealth;
    }
    current_sum = max(wealth, current_sum + wealth);
    max_sum = max(max_sum, current_sum);

    cout << max_sum << endl; 
    return 0;
    
}
