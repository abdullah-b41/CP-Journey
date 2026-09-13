#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = n;

    for (int i = 0; i < n / 2; i++)
    {
        if ((s[i] == '0' && s[n - 1 - i] == '1') || (s[i] == '1' && s[n - 1 - i] == '0'))
            ans -= 2;
        else
            break;
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