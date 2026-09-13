#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    if (b > a)
        ans++;
    if (c > a)
        ans++;
    if (d > a)
        ans++;
    cout << ans << '\n';
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