#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < n; i += k)
    {
        bool ok = false;
        for (int j = 0; j < k; j++)
        {
            if (i + j < n && s[i + j] == '0')
            {
                ok = true;
                break;
            }
        }
        if (!ok)
            ans++;
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