#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;

    vector<long long> v(n);
    map<long long, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bool found = false;
    pair<int, int> ans;
    for (int i = 0; i < n; i++)
    {
        long long need = k - v[i];
        if (mp[need])
        {
            found = true;
            ans.first = mp[need];
            ans.second = i;
            ans.second++;
            break;
        }
        mp[v[i]] = i + 1;
    }

    if (!found)
        cout << "IMPOSSIBLE\n";
    else
        cout << ans.first << " " << ans.second << '\n';
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