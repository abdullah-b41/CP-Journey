#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n));
    for (auto &i : v)
    {
        for (auto &j : i)
            cin >> j;
    }

    vector<int> ans(2 * n), freq(2 * n + 1);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            ans[i + j + 1] = v[i][j];
            freq[v[i][j]]++;
        }

    for (int i = 1; i <= 2 * n; i++)
    {
        if (freq[i] == 0)
        {
            ans[0] = i;
            break;
        }
    }

    for (auto i : ans)
        cout << i << " ";
    cout << '\n';
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