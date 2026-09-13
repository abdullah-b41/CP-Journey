#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int evens = 0, odds = 0;
    for (auto &i : v)
    {
        cin >> i;
        if (i & 1)
            odds++;
        else
            evens++;
    }
    if (evens == odds)
        cout << n << '\n';
    else if (evens > odds)
        cout << 2 * odds + 1 << '\n';
    else
        cout << 2 * evens + 1 << '\n';
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