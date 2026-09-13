#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0)
            cout << (char)toupper(s[i]);
        else
            cout << s[i];
    }
    cout << '\n';
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