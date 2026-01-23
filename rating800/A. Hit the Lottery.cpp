#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<int> coins={1, 5, 10, 20, 100};
    int count=0;
    for(int i=4; i>=0; i--){
        if(n>=coins[i]){
            count += n/coins[i];
            n = n % coins[i];
        }
    }
    cout<<count<<endl;
    return 0;
}