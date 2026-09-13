#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, z, ans = -1, coins = 0;
    cin >> x >> y >> z;
    if (z <= y)
    {
        cout << "-1" << '\n';
        return;
    }
    int d = 0;
    while(coins<x+y*d)
    {
        d++;
        coins += z;
    }
    cout << d << '\n';
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