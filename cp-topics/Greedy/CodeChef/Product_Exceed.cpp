#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, p;
    cin >> x >> y >> p;
    int steps = 0;
    while (x * y < p)
    {
        if (x < y)
            x++;
        else
            y++;
        steps++;
    }
    cout << steps << '\n';
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