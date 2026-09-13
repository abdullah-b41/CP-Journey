#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b > a && b < c)
        cout << "STAIR\n";
    else if (b > a && b > c)
        cout << "PEAK\n";
    else
        cout << "NONE\n";
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