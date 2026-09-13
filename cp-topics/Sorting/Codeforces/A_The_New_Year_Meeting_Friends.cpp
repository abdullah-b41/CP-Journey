#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((b < a || a > c) & (a < c || a < b))
        cout << abs(a - b) + abs(a - c);
    else if ((b > a || b > c) & (b < c || b < a))
        cout << abs(c - b) + abs(b - a);
    else
        cout << abs(c - b) + abs(a - c);
    cout << '\n';
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