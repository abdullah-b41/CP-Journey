#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    int ans = 0;
    while (1)
    {
        if (x.find(s) != string::npos)
        {
            cout << ans << '\n';
            return;
        }
        x += x;
        ans++;
        if (x.length() > 25 * s.length() && x.find(s) == string::npos)
        {
            cout << "-1\n";
            return;
        }
    }
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