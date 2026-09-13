#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
    int actual = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (x == (i - 1) * m + j)
            {
                actual = i;
                break;
            }
        }
    }
    cout << min(actual, n - actual + 1) << '\n';
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