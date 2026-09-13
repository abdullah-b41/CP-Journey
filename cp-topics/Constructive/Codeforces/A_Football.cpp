#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int cnt = 0;
    int n = s.length();

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            cnt++;
        else
            cnt = 0;

        if (cnt >= 6)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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