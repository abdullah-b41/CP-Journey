#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int T = 0, i = 0, m = 0, u = 0, r = 0;
    for (auto j : s)
    {
        if (j == 'T')
            T++;
        if (j == 'i')
            i++;
        if (j == 'm')
            m++;
        if (j == 'u')
            u++;
        if (j == 'r')
            r++;
    }
    if (T == 1 && i == 1 && m == 1 && u == 1 && r == 1 && s.length() == 5)
        cout << "YES\n";
    else
        cout << "NO\n";
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