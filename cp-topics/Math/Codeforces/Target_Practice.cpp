#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<string> s(10);
    long long ans = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> s[i];
        for (int j = 0; j < 10; j++)
        {
            if (s[i][j] == 'X')
            {
                ans += min(j + 1, min(10 - j, min(i + 1, 10 - i)));
            }
        }
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