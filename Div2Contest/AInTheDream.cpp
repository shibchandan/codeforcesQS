#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int p = min(a, b);
        int q = max(a, b);
        int r = min(c - a, d - b);
        int s = max(c - a, d - b);
        if (q <= (2 * (p + 1))&& s <= (2 * (r + 1)))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}