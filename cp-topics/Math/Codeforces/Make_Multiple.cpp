#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    if (n % 3 == 0)
        ans = 0;
    else if (n % 5 == 0 ? 5 * ((n / 5) + 1) % 3 == 0 : 5 * ((n + 4) / 5) % 3 == 0)
        ans = 1;
    else
        ans = 3 * ((n + 2) / 3) - n;
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