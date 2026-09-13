#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    int x = v[0];
    int best = 0;
    for (int i = 1; i < (n - 1) / 2; i++)
    {
        x = gcd(x, v[i]);
    }
    best = x;
    // cout << x << '\n';
    for (int i = (n - 1) / 2; i < n; i++)
    {
        x = gcd(x, v[i]);
        best = max(best, x);
    }

    cout << best << '\n';
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