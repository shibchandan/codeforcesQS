#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, x;
    cin >> n >> x;
    long long odd = (n + 1) / 2;
    if(x<=odd){
        cout << x*2-1 << endl;
    }else if(x>odd){
        cout<<2*(x-odd)<<endl;
    }
}