#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y, a, b;
    cin >> x >> y >> a >> b;

    long long ans = b - y;
    if (x + ans < a || b < y)
        cout << -1 << '\n';
    else
    {
        x += ans;
        ans += x - a;
        cout << ans << '\n';
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