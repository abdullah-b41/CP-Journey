#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y, k;
    cin >> x >> y >> k;

    long long ans = 0;
    long long prev = 0;

    while (k)
    {
        ans += y % x;
        if (prev == 1 && (y % x == 0))
            break;
        prev = y % x;
        y++;
        x++;
        k--;
    }

    x++;
    y++;
    k--;

    if (k > 0)
        ans += (y % x) * (k);

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