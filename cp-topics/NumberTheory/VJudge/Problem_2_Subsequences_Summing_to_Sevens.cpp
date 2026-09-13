#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> pref(n + 1);

    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pref[i + 1] = pref[i] + x;
    }

    int ans = 0;
    for (int i = 0; i + 1 <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if ((pref[j] - pref[i]) % 7 == 0)
                ans = max(ans, j - i);
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}