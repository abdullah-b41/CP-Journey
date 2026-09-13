#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, p, q;
    cin >> n >> p >> q;

    if (n == p && q == p)
        cout << "Yes\n";
    else if (p + q + 2 <= n)
        cout << "Yes\n";
    else
        cout << "No\n";
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