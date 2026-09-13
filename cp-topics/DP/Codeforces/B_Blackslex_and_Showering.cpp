#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    // v.erase(max_element(v.begin(), v.end()));
    int ans = 0, mx = 0;
    for (int i = 1; i < n - 1; i++)
    {
        mx = max(mx, abs(v[i] - v[i - 1]));
        ans = v[i];
    }
    cout << ans - mx << '\n';
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