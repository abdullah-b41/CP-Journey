#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v(4);
    for (auto &i : v)
        cin >> i;
    string s;
    cin >> s;
    int ans = 0;
    for (auto i : s)
    {
        ans += v[(int)i - '0' - 1];
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