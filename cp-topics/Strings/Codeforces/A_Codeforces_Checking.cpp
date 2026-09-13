#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string ans = "codeforces";
    if (ans.find(s) != string::npos)
    {
        cout << "YES\n";
    }
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