#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (auto &i : v)
        cin >> i;
    int mn = v[k - 1];
    int ans = 0;
    for (auto i : v)
        i >= mn &&i > 0 ? ans++ : ans;
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