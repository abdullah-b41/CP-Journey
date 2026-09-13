#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    bool found = false;
    while (!found)
    {
        bool ok = true;
        n++;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
            {
                ok = false;
                break;
            }
        if (ok)
            found = true;
    }
    if (n == m)
        cout << "YES\n";
    else
        cout << "NO\n";
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