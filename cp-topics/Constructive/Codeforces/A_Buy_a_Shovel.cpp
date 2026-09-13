#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, r;
    cin >> k >> r;
    int ans = 0, mul = 0;
    while (1)
    {
        mul += k;
        ans++;
        if (mul % 10 == 0 || mul % 10 == r)
            break;
    }
    cout << ans << '\n';
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