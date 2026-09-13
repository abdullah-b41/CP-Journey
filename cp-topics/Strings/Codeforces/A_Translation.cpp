#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    int n = s.length();
    if (n != t.length())
    {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[n - 1 - i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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