#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

bool isValidK(int k, const vector<int>& required, const vector<int>& forbidden) {
    set<int> requiredResidues, forbiddenResidues;

    for (int planet : required) {
        requiredResidues.insert(planet % k);
    }

    for (int planet : forbidden) {
        forbiddenResidues.insert(planet % k);
    }

    for (int residue : requiredResidues) {
        if (forbiddenResidues.count(residue) > 0) {
            return false;
        }
    }
    return true;
}

int findMinimumK(int n, const vector<int>& required, const vector<int>& forbidden) {
    int left = 1, right = n;

    int result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (isValidK(mid, required, forbidden)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> required(x);
        vector<int> forbidden(y);

        for (int i = 0; i < x; i++) {
            cin >> required[i];
        }
        for (int i = 0; i < y; i++) {
            cin >> forbidden[i];
        }

        int minK = findMinimumK(n, required, forbidden);
        cout << minK << endl;
    }
    return 0;
}