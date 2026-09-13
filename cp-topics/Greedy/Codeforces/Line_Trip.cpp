#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    int tank = v[0], prev = v[0];
    for (int i = 1; i < n; i++)
    {
        tank = max(tank, v[i] - prev);
        prev = v[i];
    }
    tank = max(tank, 2 * (x - v[n - 1]));

    cout << tank << '\n';
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