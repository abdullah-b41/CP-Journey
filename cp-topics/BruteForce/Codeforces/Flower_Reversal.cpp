#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string cpy = s;
    int best = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            int j = i;
            while (j < n && s[j] == s[i])
                j++;

            reverse(s.begin() + i, s.begin() + j + (j != n ? 1 : 0));

            int ans = 0;
            for (int k = 1; k < n; k++)
                if (s[k] == s[k - 1])
                    ans++;
            best = max(best, ans);
        }
        s = cpy;
    }

    int ans = 0;
    for (int k = 1; k < n; k++)
        if (s[k] == s[k - 1])
            ans++;
    best = max(best, ans);

    cout << best << '\n';
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