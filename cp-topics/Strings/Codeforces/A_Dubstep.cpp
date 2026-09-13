#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    string ans;
    string bad = "WUB";

    bool first = true;
    int n = s.length();
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        string tmp;
        if (i + 2 < n)
        {
            tmp += s[i];
            tmp += s[i + 1];
            tmp += s[i + 2];
            if (tmp == bad)
            {
                i += 2;
                continue;
            }
        }

        string add;
        int j = i;

        while (j < n && (s.substr(j,3)!=bad))
        {
            add += s[j];
            j++;
        }
        i=j;
        i--;

        if (first)
        {
            ans += add;
            first = false;
        }
        else
        {
            ans += ' ';
            ans += add;
        }
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