#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    int ans = 0;
    if (y < x)
        ans = x;
    else
    {
        if (x + k >= y)
            ans = y;
        else
            ans = 2 * y - k - x;
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
