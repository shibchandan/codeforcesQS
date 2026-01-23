#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int toTd=k*l;
    int canDrinks=toTd/nl;
    int canLimes=c*d;
    int canSalt=p/np;
    cout << min(canDrinks, min(canLimes, canSalt))/n;
    return 0;
}