#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.rbegin(), v.rend());

    vector<long long> total(n);
    total[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        total[i] = v[i] + total[i - 1];
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << (x - y - 1 >= 0 ? total[x - 1] - total[x - y - 1] : total[x - 1]) << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
