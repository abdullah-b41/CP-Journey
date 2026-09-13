#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = 0;
    for (auto &i : v)
    {
        cin >> i;
        mx = max(mx, i);
    }
    int ans = 0;
    for (auto i : v)
        ans += mx - i;
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