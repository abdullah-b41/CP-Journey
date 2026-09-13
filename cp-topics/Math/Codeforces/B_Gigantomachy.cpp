#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    if (a[0] + n >= b[0] + m)
        cout << 1 << '\n';
    else
        cout << 2 << '\n';
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