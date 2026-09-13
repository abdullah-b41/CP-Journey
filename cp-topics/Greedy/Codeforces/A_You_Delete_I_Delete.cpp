#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    auto x = s.find("10");
    auto y = s.find("01");
    int n = s.length();
    if (x != string::npos)
    {
        for (int i = 0; i < n; i++)
            if (i != x && i != x + 1)
                cout << s[i];
    }
    else
    {
        for (int i = 0; i < n; i++)
            if (i != y && i != y + 1)
                cout << s[i];
    }
    cout << '\n';
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