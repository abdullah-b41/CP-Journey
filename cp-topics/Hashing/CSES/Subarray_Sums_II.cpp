#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    vector<long long> prefix(n + 1);
    map<long long, long long> mp;

    for (int i = 0; i < n; i++)
    {
        prefix[i + 1] = prefix[i] + v[i];
    }

    long long ans = 0;
    for (auto i : prefix)
    {
        ans += mp[i - x];
        mp[i]++;
    }

    cout << ans << "\n";
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