#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<long long> v(n), pref(n + 1);
    unordered_map<long long, long long> mp;
    mp[0]++;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pref[i + 1] = pref[i] + v[i];
    }

    long long cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        long long need = pref[i] - k;
        cnt += mp[need];
        mp[pref[i]]++;
    }

    cout << cnt << '\n';
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