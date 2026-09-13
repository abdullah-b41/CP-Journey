#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    if (v[0] == 0 && v[n - 1] == 0)
    {
        cout << 0 << '\n';
        return;
    }

    int x = count(v.begin(), v.end(), 0);
    if (x < 2)
    {
        cout << -1 << '\n';
        return;
    }

    int cnt = 0;
    if (v[0] != 0)
        cnt++;
    if (v[n - 1] != 0)
        cnt++;
    cout << cnt << '\n';
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