#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a = "codeforces";
    string s;
    cin >> s;
    int n = s.length(), ans = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != s[i])
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