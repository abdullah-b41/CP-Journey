#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

int a[2000][2000] = {};

void solve()
{
    memset(a, 0, sizeof(a));
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    if (n == m && n == 1)
    {
        cout << "-1\n";
        return;
    }

    if (m == 1)
    {
        for (int i = 0; i + 1 < n; i++)
        {
            swap(a[i][0], a[i + 1][0]);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j + 1 < m; j++)
            {
                swap(a[i][j], a[i][j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    fast;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}