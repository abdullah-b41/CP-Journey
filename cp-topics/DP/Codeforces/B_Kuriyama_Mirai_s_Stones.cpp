#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> v(n + 1, 0);
    vector<long long> pfx_sum(n + 1, 0);
    for (long long i = 1; i <= n; i++)
    {
        cin >> v[i];
        pfx_sum[i] = pfx_sum[i - 1] + v[i];
    }
    vector<long long> cpy = v;
    sort(v.begin(), v.end());

    vector<long long> pfx_sorted(n + 1, 0);
    for (long long i = 1; i <= n; i++)
        pfx_sorted[i] = pfx_sorted[i - 1] + v[i];

    long long q;
    cin >> q;
    while (q--)
    {
        long long type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
            cout << pfx_sum[r] - pfx_sum[l - 1] << '\n';
        else
            cout << pfx_sorted[r] - pfx_sorted[l - 1] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    long long t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}