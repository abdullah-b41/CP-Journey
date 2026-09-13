#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<long long> v(n), pref(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pref[i + 1] = pref[i] + v[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << '\n';
    }
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