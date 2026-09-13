#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n), pref(n + 1);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pref[i + 1] = pref[i] + v[i];
        total += v[i];
    }
    while (q--)
    {
        int l, r, k, tmp = total;
        cin >> l >> r >> k;
        tmp += k * (r - l + 1) - (pref[r] - pref[l - 1]);
        cout << (tmp & 1 ? "YES\n" : "NO\n");
    }
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