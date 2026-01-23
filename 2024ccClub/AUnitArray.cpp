#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll arr[n];
    ll ans = 0, pos = 0, neg = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == -1)
            neg++;
        else
            pos++;
    }

    sort(arr, arr + n);

    while (!((pos - neg) >= 0 && neg % 2 == 0))
    {
        neg--;
        pos++;
        ans++;
    }

    cout << ans << nline;
}

int main()
{
    solve();
    return 0;
}
