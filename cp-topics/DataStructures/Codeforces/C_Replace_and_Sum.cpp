#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    vector<int> ans(n + 1, 0), pref_sum(n + 1, 0);
    for (int i = 0; i < n; i++)
        ans[i + 1] = max(a[i], b[i]);

    int mx = ans[n];
    for (int i = n; i >= 0; i--)
    {
        if (ans[i] > mx)
            mx = ans[i];
        ans[i] = mx;
    }

    for (int i = 1; i <= n; i++)
        pref_sum[i] = pref_sum[i - 1] + ans[i];


    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pref_sum[r] - pref_sum[l - 1] << " ";
    }
    cout << '\n';
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