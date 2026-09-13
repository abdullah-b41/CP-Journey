#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    if (x >= 1900)
        x = 1;
    else if (x >= 1600)
        x = 2;
    else if (x >= 1400)
        x = 3;
    else
        x = 4;
    cout << "Division " << x << '\n';
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