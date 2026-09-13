#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'a' || s[i] == 'e')
        {
            ans += s[i];
            ans += s[i - 1];
            ans += '.';
            i--;
        }
        else
        {
            ans += s[i];
            ans += s[i - 1];
            ans += s[i - 2];
            ans += '.';
            i -= 2;
        }
    }
    ans.pop_back();
    reverse(ans.begin(), ans.end());
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