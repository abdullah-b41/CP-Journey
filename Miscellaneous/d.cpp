#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if ((int)s[i] % 8 == 0)
        {
            cout << "YES" << '\n'
                 << s[i] << '\n';
            return;
        }
    }
    for (int i = 0; i + 1 < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int dgt = (int)(s[i] - '0') * 10 + (int)(s[j] - '0');
            if (dgt % 8 == 0)
            {
                cout << "YES" << '\n'
                     << dgt << '\n';
                return;
            }
        }
    }
    for (int i = 0; i + 2 < n; i++)
    {
        for (int j = i + 1; j + 1 < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int dgt = (int)(s[i] - '0') * 100 + (int)(s[j] - '0') * 10 + (int)(s[k] - '0');
                if (dgt % 8 == 0)
                {
                    cout << "YES" << '\n'
                         << dgt << '\n';
                    return;
                }
            }
        }
    }
    for (int i = 0; i + 3 < n; i++)
    {
        for (int j = i + 1; j + 2 < n; j++)
        {
            for (int k = j + 1; k + 1 < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    int dgt = (int)(s[i] - '0') * 1000 + (int)(s[j] - '0') * 100 + (int)(s[k] - '0') * 10 + (int)(s[l] - '0');
                    if (dgt % 8 == 0)
                    {
                        cout << "YES" << '\n'
                             << dgt << '\n';
                        return;
                    }
                }
            }
        }
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
    {
        solve();
    }
}
