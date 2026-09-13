#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    long long m;
    cin >> n >> m;

    if ((n + 1) % 3 != 0)
    {
        cout << "-1\n";
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
            cout << 0 << ' ';
        else
            cout << ((i / 3) % 2 == 0 ? 1 : m - 1) << ' ';
    }
    cout << '\n';
}

int main()
{
    fast;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}