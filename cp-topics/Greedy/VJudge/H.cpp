#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        int x = s[i] - '0';
        if (i + 1 < n)
            x = (s[i] - '0') * 10 + s[i + 1] - '0';
        // cout << "x : " << x << '\n';
        if (x <= 26)
        {
            cout << (char)('a' + x - 1);
            i++;
        }
        else
        {
            cout << (char)('a' + x / 10 - 1);
        }
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