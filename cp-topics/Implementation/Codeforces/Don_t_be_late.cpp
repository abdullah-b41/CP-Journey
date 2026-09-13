#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout << (a / c <= b ? "Yes\n" : "No\n");
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