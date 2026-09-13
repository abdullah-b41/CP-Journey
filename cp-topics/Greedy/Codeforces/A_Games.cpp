#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> host(n), guest(n);

    for (int i = 0; i < n; i++)
        cin >> host[i] >> guest[i];

    long long ans = 0;
    for (auto i : host)
    {
        for (auto j : guest)
            if (i == j)
                ans++;
    }
    cout << ans << '\n';
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