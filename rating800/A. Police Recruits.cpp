#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    int tempP = 0; // free police
    int tempN = 0; // untreated crimes

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;

        if(a > 0){
            tempP += a;   // hire police
        } else { // a == -1 (crime)
            if(tempP > 0){
                tempP--;  // police handles crime
            } else {
                tempN++;  // crime untreated
            }
        }
    }

    ans = tempN;
    cout << ans << endl;
}
