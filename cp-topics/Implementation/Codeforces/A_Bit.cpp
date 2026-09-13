#include <bits/stdc++.h>
using namespace std;

int ans = 0;

void solve()
{
    string s;
    cin >> s;
    if (s == "++X")
        ++ans;
    else if (s == "--X")
        --ans;
    else if (s == "X++")
        ans++;
    else
        ans--;
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
    cout << ans << '\n';
    return 0;
}