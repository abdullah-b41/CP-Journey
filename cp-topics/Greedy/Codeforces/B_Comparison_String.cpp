#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int best = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '<')
        {
            int j = i, cnt = 0;
            while (s[j] == '<')
            {
                cnt++;
                j++;
            }
            best = max(best, cnt);
        }
        else
        {
            int j = i, cnt = 0;
            while (s[j] == '>')
            {
                cnt++;
                j++;
            }
            best = max(best, cnt);
        }
    }
    cout << best + 1 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
