#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int odd = 0;
    bool ok = true;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
        if (i % 2 == 1)
            odd++;
    }
    if (odd % 2 == 1)
        ok = false;

    cout << (ok ? "YES" : "NO") << '\n';
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
