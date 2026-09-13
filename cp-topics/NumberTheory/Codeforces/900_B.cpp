#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s, ans(2, ' ');
    cin >> s;
    int best = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == s[i] && s[j + 1] == s[i + 1])
                cnt++;
        }
        if (cnt > best)
        {
            best = cnt;
            ans[0] = s[i], ans[1] = s[i + 1];
        }
    }
    cout << ans << '\n';
}

int main()
{
    fast;

    int t = 1;
    while (t--)
        solve();

    return 0;
}