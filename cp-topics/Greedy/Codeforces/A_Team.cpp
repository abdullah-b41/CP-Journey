#include <bits/stdc++.h>
using namespace std;

int ans = 0;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    a + b + c >= 2 ? ans++ : ans;
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
    cout << ans << '\n';

    return 0;
}