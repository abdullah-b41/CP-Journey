#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int xr = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        xr ^= x;
    }
    // cout << xr << '\n';
    if (n & 1)
        cout << xr << '\n';
    else
    {
        if (xr)
            cout << -1 << '\n';
        else
            cout << 0 << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}