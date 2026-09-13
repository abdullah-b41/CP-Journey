#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(2 * n);
    for (auto &i : v)
        cin >> i;

    long long ans = 0;
    for (int i = 0; i < n; i++)
        ans += max(v[i], v[2 * n - 1 - i]);
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