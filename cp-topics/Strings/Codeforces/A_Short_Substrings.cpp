#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    cout << s[0];
    for (int i = 1; i + 1 < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << s[i];
            i++;
        }
        else
            cout << s[i];
    }
    cout << s[s.length() - 1] << '\n';
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