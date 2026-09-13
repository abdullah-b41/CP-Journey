#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    int dot = max(x, y);
    int left = 6 - dot + 1;
    if (left == 3)
        cout << "1/2" << '\n';
    else if (left == 2)
        cout << "1/3" << '\n';
    else if (left == 4)
        cout << "2/3" << '\n';
    else if (left == 6)
        cout << "1/1" << '\n';
    else
        cout << left << "/6" << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}