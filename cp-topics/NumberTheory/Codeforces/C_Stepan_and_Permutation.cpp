#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    bool ok = true;
    int m = 1000;
    while (m--)
    {
        for (int i = 0; i + 1 < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] > v[j])
                {
                    int diff = abs(i - j);
                    if (diff == x || diff == y)
                    {
                        swap(v[i], v[j]);
                    }
                }
            }
        }

        for (auto &i : v)
            cout << i << ' ';
        cout << '\n';

        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                ok = false;
                // cout << "NO\n";
                // return;
            }
        }

        if (ok)
        {
            cout << "YES\n";
            return;
        }
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