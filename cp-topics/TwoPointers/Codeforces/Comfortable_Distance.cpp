#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, l, r;
    string s;
    cin >> n >> l >> r >> s;

    map<char, int> mp;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (i - r - 1 >= 0)
            mp[s[i - r - 1]]--;
        if (i - l >= 0)
            mp[s[i - l]]++;

        ans += mp[s[i]];
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