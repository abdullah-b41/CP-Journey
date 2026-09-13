#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (auto &i : s)
        cin >> i;

    int ans = 2e9;
    for (int i = 0; i + 1 < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int total = 0;
            for (int k = 0; k < m; k++)
            {
                total += abs(s[i][k] - s[j][k]);
            }
            ans = min(ans, total);
        }
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