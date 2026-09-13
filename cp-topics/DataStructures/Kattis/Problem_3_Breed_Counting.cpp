#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> pref(3, vector<int>(n + 1, 0));

    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pref[x - 1][i + 1]++;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            pref[i][j] += pref[i][j - 1];
        }
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        for (int i = 0; i < 3; i++)
        {
            cout << pref[i][r] - pref[i][l - 1];
            if (i < 2)
                cout << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}