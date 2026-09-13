#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> c(3), a(5);
    for (auto &it : c)
        cin >> it;
    for (auto &it : a)
        cin >> it;

    if (a[0] > c[0] || a[1] > c[1] || a[2] > c[2])
    {
        cout << "NO\n";
        return;
    }

    long long others = max(0, a[0] + a[3] - c[0]) + max(0, a[1] + a[4] - c[1]) + a[2];

    cout << (c[2] >= others ? "YES" : "NO") << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
