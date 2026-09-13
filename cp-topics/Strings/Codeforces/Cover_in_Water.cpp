#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int ans = 0, continuous = 0, best = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            continuous++;
            best = max(best, continuous);
            ans++;
        }
        else
            continuous = 0;
    }
    if (best > 2)
        cout << 2 << '\n';
    else
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