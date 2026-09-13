#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int mn = a < b ? a : b, mx = a > b ? a : b;
    if (mn % 2 == 1)
    {
        if (((mx + 1) / 2) == mn)
        {
            cout << "No\n";
        }
    }
    else
    {
        cout << "Yes\n";
    }
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
