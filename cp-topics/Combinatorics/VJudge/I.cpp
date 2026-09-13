#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    long long ans = -1;
    if (t.length() > 1 && t.find('a') != std::string::npos)
        ans = -1;
    else if (t == "a")
        ans = 1;
    else
    {
        ans = 1;
        int x = s.length();
        while (x--)
            ans *= 2;
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