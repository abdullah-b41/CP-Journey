#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<long long> v(n), pref(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pref[i + 1] = pref[i] + v[i];
    }

    unordered_map<long long, long long> mp;
    long long ans = 0;
    for (int i = 0; i <= n; i++)
    {
        int need = (pref[i] % n + n) % n;
        ans += mp[need];
        mp[((pref[i] % n) + n) % n]++;
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