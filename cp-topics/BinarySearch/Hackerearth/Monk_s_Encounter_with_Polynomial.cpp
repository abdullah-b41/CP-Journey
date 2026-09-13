#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, c, k;
    cin >> a >> b >> c >> k;

    long long ans = 0;
    int l = 0, r = 1e5;
    while (l <= r)
    {
        long long mid = l + (r - l) / 2;
        long long y = a * mid * mid + b * mid + c;

        if (y >= k)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
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