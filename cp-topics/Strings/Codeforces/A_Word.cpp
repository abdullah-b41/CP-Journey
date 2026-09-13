#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int sml = 0;
    for (int i = 0; i < n; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            sml++;
    for (int i = 0; i < n; i++)
        cout << (sml >= (n + 1) / 2 ? (char)tolower(s[i]) : (char)toupper(s[i]));
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