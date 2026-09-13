#include <bits/stdc++.h>
using namespace std;

int a, b, p, q, r;

void solve()
{
    cin >> a >> b >> p >> q >> r;
    int ans = 1e9;
    for (int i = 0; i <= min(a, b); i++)
    {
        int mixed = i * r + (a - i + 1) / 2 * p + (b - i + 1) / 2 * q;
        ans = min(ans, mixed);
    }
    cout << ans << '\n';
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