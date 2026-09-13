#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s == "YES" || s == "YEs" || s == "Yes" || s == "yes" ||
        s == "YeS" || s == "yES" || s == "yEs" || s == "YeS")
        cout << "YES\n";
    else
        cout << "NO\n";
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