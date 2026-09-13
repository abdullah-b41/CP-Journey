#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 != x2 && y1 != y2)
        cout << "sad\n";
    else
    {
        if (x1 > x2)
            cout << "left\n";
        else if (x1 < x2)
            cout << "right\n";
        else if (y1 > y2)
            cout << "down\n";
        else
            cout << "up\n";
    }
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