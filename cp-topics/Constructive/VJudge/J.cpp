#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
        for (auto i = 1; i <= n; i++)
            cout << i << " ";
    else
    {
        cout << n / 2 + 1 << " ";
        for (auto i = 2; i <= n; i++)
            cout << i << " ";
    }
    cout << '\n';
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