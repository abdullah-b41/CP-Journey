#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    bool ok = false;

    if (k % 2 == 0)
    {
        if (n % 2 == 0)
            ok = true;
    }
    else
    {
        ok = true;
    }
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
