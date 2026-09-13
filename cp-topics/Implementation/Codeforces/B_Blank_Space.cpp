#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = 0, cnt = 0;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0)
            cnt++;
        else
            cnt = 0;
        ans = max(ans, cnt);
    }
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