#include <bits/stdc++.h>
using namespace std;

int n, x;

long long trucks(int n, int x, long long ans)
{
    if (n <= x)
        return ++ans;

    if (n & 1)
        return trucks((n + 1) / 2, x, ans) + trucks(n / 2, x, ans);
    else
        return 2 * trucks(n / 2, x, ans);
}

void solve()
{
    while (cin >> n >> x)
    {
        cout << trucks(n, x, 0) << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}