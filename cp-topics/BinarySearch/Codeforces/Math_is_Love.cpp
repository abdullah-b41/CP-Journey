#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long l = 0, r = 100000;
    long long ans = 0;

    while (l <= r)
    {
        long long mid = l + (r - l) / 2;

        if ((mid * (mid + 1)) / 2 == n)
        {
            ans = mid;
            break;
        }

        if ((mid * (mid + 1)) / 2 > n)
            r = mid - 1;
        else
            l = mid + 1;
    }

    if (ans)
        cout << ans << '\n';
    else
        cout << "NAI\n";
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